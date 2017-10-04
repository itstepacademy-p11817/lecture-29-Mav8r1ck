#include<stdio.h>
#include<string.h>

#define YES 1
#define NO 0
#define MEN 1
#define WOMEN 0
#define MAXLETTERS 11
#define MENS 2



struct men_t
{
    char name_men [MAXLETTERS];
    unsigned int sex : 1;
    unsigned int education : 1;
    unsigned int famaly_status : 1;
    unsigned int work_status : 1;
};

void print_struct(struct men_t a[MENS], int counter)
{
    for(int index = 0; index < counter; index++)
    {
        printf("Name %s\n", a[index].name_men);
        printf("Sex is %s\n", a[index].sex==YES? "Man":"Woman");
        printf("Education is %s\n", a[index].education==YES? "Yes":"No");
        printf("Famaly status %s\n", a[index].famaly_status==YES? "Yes":"No");
        printf("Work status %s\n", a[index].work_status==YES? "Yes":"No");
    }
}

/*
void edit_car(struct men_t a[MENS])
{
    int position;
    scanf("%d", &position);
    printf("Enter model\n");
    scanf("%s", &a[position].model);
    printf("Enter color\n");
    scanf("%s", &a[position].color);
    printf("Enter number\n");
    scanf("%s", &a[position].number);
}

void find_number(struct men_t a[MENS], int counter)
{
    char number[MAXNUMBER];
    scanf("%s", &number);
    for(int index = 0; index < counter; index++)
    {
        if(strcmp(a[index].number.let, number)==0)
        {
            printf("Model %s, color is %s, number is %s\n", a[index].model, a[index].color, a[index].number.let);
        }
    }
}
*/
int main()
{
    struct men_t a[MENS];
    int counter=0;
    while(counter < MENS)
    {
        unsigned temp;
        printf("Enter name(max 10 letters)\n");
        scanf("%s", &a[counter].name_men);
        printf("Enter sex(MEN/WOMEN)\n");
        scanf("%u", &temp);
        a[counter].sex = temp;
        printf("Enter education(YES/NO)\n");
        scanf("%u", &temp);
        a[counter].education = temp;
        printf("Enter status of famaly(YES/NO)\n");
        scanf("%u", &temp);
        a[counter].famaly_status = temp;
        printf("Enter status of work(YES/NO)\n");
        scanf("%u", &temp);
        a[counter++].work_status = temp;
    }

    printf("Base yours mens:\n");

    print_struct(a, counter);
//    edit_car(a);
//    find_number(a, counter);
    return 0;
}