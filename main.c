#include<stdio.h>
#define N 5
int main()
{
    double powers[]={56,343,76,97,234};
    int count=5;
    double insertpower;
    double deletepower;  //删除战力值
    int  deleteIndex=-1;  //删除战力值的下标
    int i=0,j=0,temp;
    printf("请输入要删除的一个战力值");  //删除操作
    scanf("%lf",&deletepower);
    for(i=0;i<count;i++)
    {
        if(deletepower==powers[i])
        {
            deleteIndex=i;
            break;
        }
    }
    if(-1 == deleteIndex)      //这里是要删除数组的下标
    {
        printf("茫茫人海，你却没有找到我，真让我失望啊\n");
    }
    else
    {
        for(i=deleteIndex;i<count-1;i++)  //此处注意哦
        {
            powers[i]=powers[i+1];
        }
         count--;  // 应该在这
    }
    printf("删除后的结果为:");
                // 刚刚我放在这了
    for(i=0;i<count;i++)
    {
        printf("%.2lf\t",powers[i]);
    }
    printf("\n*************************************\n");
    printf("\n");
    printf("请插入一个战力值");    // 插入操作
    scanf("%lf",&insertpower);
    powers[count]=insertpower;
    count++;
    for(i=0;i<count;i++)
    {
        printf("%.2lf\t",powers[i]);
    }
    printf("\n");
    printf("*************************************\n\n");
                                //排序操作
    for(i=0;i<N-1;i++)
        for (j=0;j<N-1-i;j++)
    {
        if(powers[j]<powers[j+1])
        {
            temp=powers[j];
            powers[j]=powers[j+1];
            powers[j+1]=temp;
        }
    }
    printf("排序后的结果为:");
    for (i=0;i<N;i++)
    {
        printf("%.2lf\t",powers[i]);
    }
    printf("\n***********************************\n");
    return 0;
}
