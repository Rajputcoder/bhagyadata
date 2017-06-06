#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>
 
static int __init init1(void)
{
    printk(KERN_INFO "Hiii: module registered");
    return 0;
}
 
static void __exit exit1(void)
{
    printk(KERN_INFO "bye: module unregistered");
}
 
module_init(init1);
module_exit(exit1);
 


MODULE_LICENSE("GPL");
MODULE_AUTHOR("bhagyshree patil");
MODULE_DESCRIPTION("my First Driver");
