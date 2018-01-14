
#include <linux/moduleparam.h>

static char *mystr = "hello";
static int myint = 1;
static int myarr[3] = {0,1,2};

module_param(myint, int, S_IRUGO);
module_param(mystr, charp, S_IRUGO);
module_param_array(myarr, int, NULL, S_IWUSR|S_IRUSR);

MODULE_PARM_DESC(myint, "this is my int variable");
MODULE_PARM_DESC(mystr, "this is my char pointer variable");
MODULE_PARM_DESC(myarr, "this is my array of int");

static int foo()
{
    pr_info("mystring is a string: %s \n", mystr);
    pr_info("array elements: %d\t%d\t%d", myarr[0], myarr[1], myarr[2]);
    return myint;
}
