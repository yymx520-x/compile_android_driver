#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("yymx221");
MODULE_DESCRIPTION("hello");
MODULE_VERSION("0.1");

static int __init hello_init(void) {
    pr_info(KERN_INFO "hello: loaded\n");
    return 0;
}

static void __exit hello_exit(void) {
    pr_info(KERN_INFO "hello: unloaded\n");
}

module_init(hello_init);
module_exit(hello_exit);
