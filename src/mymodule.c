#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

// haha I'm just having some fun here 
MODULE_LICENSE("GPL");
MODULE_AUTHOR("s4ls4");
MODULE_DESCRIPTION("An example kernel module to try out kernel development");
MODULE_VERSION("March-2025");

// Here goes the functions offered by the API
static int __init mymodule_init(void) {
 printk(KERN_INFO "Yaay it is working !!!\n");
 return 0;
}static void __exit mymodule_exit(void) {
 printk(KERN_INFO "That was fun , bye bye\n");
}

//these two lines are necessary to tell the kernel what to do when loading/removing the module
module_init(mymodule_init);
module_exit(mymodule_exit);