#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("GPL");

static int __init mod_init(void)
{
    printk(KERN_ALERT "Hello, prprnya!\n");
    return 0;
}

static void __exit mod_exit(void)
{
    printk(KERN_ALERT "Goodbye, prprnya!\n");
}

module_init(mod_init);
module_exit(mod_exit);
