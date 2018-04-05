#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");

static char *who = "Vipul";
module_param(who, charp, S_IRUGO);

static int hello_init(void)
{
	printk(KERN_ALERT "A0178385M: Hello, %s\n", who);
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "A0178385M: Goodbye, %s\n", who);
}


module_init(hello_init);
module_exit(hello_exit);
