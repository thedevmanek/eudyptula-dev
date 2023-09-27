#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_VERSION("0.01");
static int __init hello_world_init(void)
{
    printk(KERN_INFO "Hello, World !\n");
    return 0;
    
}
static void __exit hello_world_exit(void)
{
    printk(KERN_INFO "Goodbye, World !\n");
}
module_exit(hello_world_exit);
module_init(hello_world_init);