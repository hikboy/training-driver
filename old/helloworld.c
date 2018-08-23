
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init helloworld_init(void){
    pr_info("hello world!\n");
    return 0;
}


static int __exit helloworld_exit(void){
    pr_info("end of the world\n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);

MODULE_AUTHER("Ljb <ljb@outlook.com>");
MODULE_LICENSE("GPL");

