# Disclosure

Majority part of this particular tas was taken from https://blog.sourcerer.io/writing-a-simple-linux-kernel-module-d9dc3762c234
It has great introduction to kernel programming. I am just writing whatever i have understood about the code and the process itself. I have tried to touch each and every aspect of the code here.

hello_world.c
```c
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
```
The init.h is one of the inbuild modules it is used to build kernels from source.The best way to find out what it actually does is to remove it from code and see what errors pop up most of the times they will point you to the correct location of the call. This is very helpful while learning about new things from another source.




```c
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
```
