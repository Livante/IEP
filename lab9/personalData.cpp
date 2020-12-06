#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/of.h>
#include <linux/platform_device.h>


static struct of_device_id myStructArr[]={
    {.compatible="first"},
    {.compatible="second"},
    {.compatible="third"},
    {.compatible="fourth"},
    {/**/},
};
MODULE_DEVICE_TABLE(of,myStructArr);

void generalization(int a, int b, int c, int d, int e, int f,int g, int h){
    int aux=0;

    if(a>b){
        aux=a-b;
        printk(KERN_ALERT "Piciorul persoanei este mai mare cu: %d\n",aux);
    }else{
        aux=b-a;
        printk(KERN_ALERT "Piciorul persoanei este mai mic cu: %d\n",aux);
    }
 
    if(c>d){
        aux=c-d;
        printk(KERN_ALERT "Persoana este mai in varsta cu: %d ani\n",aux);
    }else{
        aux=d-c;
        printk(KERN_ALERT "Persoana este mai tanara cu: %d ani\n",aux);
    }

    if(e>f){
        aux=e-f;
        printk(KERN_ALERT "Persoana este mai inalta cu %d cm\n",aux);
    }else{
        aux=f-e;
        printk(KERN_ALERT "Persoana este mai scunda cu %d cm\n",aux);
    }
 
    if(g>h){
        aux=g-h;
        printk(KERN_ALERT "Relatia persoanei este mai lunga cu: %d ani fata de medie\n",aux);
    }else{
        aux=h-g;
        printk(KERN_ALERT "Relatia persoanei este mai scurta cu: %d ani fata de medie\n",aux);
    }

}

static int data_generalization(struct platform_device *drive){
    int picior=0;
    int varsta=0;
    int inaltime=0;
    int ani=0;

    struct device_node *target = drive->dev.of_node;
    printk(KERN_ALERT "Operations from platform device %s\n",drive->name);
    
    of_property_read_u32(target,"first data",&picior);
        printk(KERN_ALERT "first data %d\n",picior);

    of_property_read_u32(target,"second data",&varsta);
        printk(KERN_ALERT "first data %d\n",varsta);

    of_property_read_u32(target,"third data",&inaltime);
        printk(KERN_ALERT "first data %d\n",inaltime);

    of_property_read_u32(target,"fourth data",&ani);
        printk(KERN_ALERT "first data %d\n",ani);

    generalization(picior,42,varsta,60,inaltime,175,ani,5);

    return 0;
}

static int remove (struct platform_device *drive){
    printk(KERN_ALERT "Enough about this person!\n");
    return 0;
}

static struct platform_driver driver={
    .probe=data_generalization,
    .remove=remove,
    .drive={
        .name="driver",
        .of_match_table=of_match_ptr(myStructArr),
        .owner=THIS_MODULE,
    },
};

module_platform_driver(driver);