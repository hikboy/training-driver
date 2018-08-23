#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("jason.l");

static int hello_init(void)
{
	printk("hello ljb\n");
	printk(KERN_INFO "The process is \"%s\" (pid %i)\n", current->comm, current->pid);
	return 0;
}

static int hello_exit(void)
{
	printk("bye bye ljb\n");
	return 0;
}

module_init(hello_init);
module_exit(hello_exit);
