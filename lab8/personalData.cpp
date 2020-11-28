#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>


int personalData[4] ={0,0,0,0}; //Nr picior, varsta, inaltime, ani de relatie, 
int averageData[4] = {39, 45,168,5};
module_param_array(arrayOfNum,int, NULL, S_IRUSR > S_IWUSR);

void generalization(void){
    int aux=0;

    if(personalData[0]>averageData[0]){
        aux=personalData[0]-averageData[0];
        printk(KERN_INFO "Piciorul persoanei este mai mare cu: %d\n",aux);
    }else{
        aux=averageData[0]-personalData[0];
        printk(KERN_INFO "Piciorul persoanei este mai mic cu: %d\n",aux);
    }
 
    if(personalData[1]>averageData[1]){
        aux=personalData[1]-averageData[1];
        printk(KERN_INFO "Persoana este mai in varsta cu: %d ani\n",aux);
    }else{
        aux=averageData[1]-personalData[1];
        printk(KERN_INFO "Persoana este mai tanara cu: %d ani\n",aux);
    }

    if(personalData[2]>averageData[2]){
        aux=personalData[2]-averageData[2];
        printk(KERN_INFO "Persoana este mai inalta cu %d cm\n",aux);
    }else{
        aux=averageData[2]-personalData[2];
        printk(KERN_INFO "Persoana este mai scunda cu %d cm\n",aux);
    }
 
    if(personalData[3]>averageData[3]){
        aux=personalData[3]-averageData[3];
        printk(KERN_INFO "Relatia persoanei este mai lunga cu: %d ani fata de medie\n",aux);
    }else{
        aux=averageData[3]-personalData[3];
        printk(KERN_INFO "Relatia persoanei este mai scurta cu: %d ani fata de medie\n",aux);
    }

}

static int __init personalData_init(void){
    printk(KERN_INFO "Numarul la picior este: %d\n",personalData[0]);
    printk(KERN_INFO "Persoana are %d ani.\n",personalData[1]);
    printk(KERN_INFO "Persoana are %d cm inaltime\n",personalData[2]);
    if (personalData[3]!=0){
        printk(KERN_INFO "Persoana este in relatie de %d ani.\n",personalData[3]);
    }
    else{
        printk(KERN_INFO "Persoana este single!\n");
    }

    generalization();
}

static void __exit personalData_exit(void){
    printk(KERN_INFO "Enough about this person!\n");
}

module_init(personalData_init);
module_exit(personalData_exit);