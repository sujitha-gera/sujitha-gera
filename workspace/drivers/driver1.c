#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/printk.h>

MODULE_DESCRIPTION("hello world code");
MODULE_AUTHOR("sujitha");
MODULE_LICENSE("GPL");

static int lkm_init(void)
{
	pr_info("hello world\n");
	return 0;
}

static void lkm_exit(void)
{
	pr_info("bye\n");
}

module_init(lkm_init);
module_exit(lkm_exit);
