#include<stdio.h>
#define N 5
int main()
{
    double powers[]={56,343,76,97,234};
    int count=5;
    double insertpower;
    double deletepower;  //ɾ��ս��ֵ
    int  deleteIndex=-1;  //ɾ��ս��ֵ���±�
    int i=0,j=0,temp;
    printf("������Ҫɾ����һ��ս��ֵ");  //ɾ������
    scanf("%lf",&deletepower);
    for(i=0;i<count;i++)
    {
        if(deletepower==powers[i])
        {
            deleteIndex=i;
            break;
        }
    }
    if(-1 == deleteIndex)      //������Ҫɾ��������±�
    {
        printf("ãã�˺�����ȴû���ҵ��ң�������ʧ����\n");
    }
    else
    {
        for(i=deleteIndex;i<count-1;i++)  //�˴�ע��Ŷ
        {
            powers[i]=powers[i+1];
        }
         count--;  // Ӧ������
    }
    printf("ɾ����Ľ��Ϊ:");
                // �ո��ҷ�������
    for(i=0;i<count;i++)
    {
        printf("%.2lf\t",powers[i]);
    }
    printf("\n*************************************\n");
    printf("\n");
    printf("�����һ��ս��ֵ");    // �������
    scanf("%lf",&insertpower);
    powers[count]=insertpower;
    count++;
    for(i=0;i<count;i++)
    {
        printf("%.2lf\t",powers[i]);
    }
    printf("\n");
    printf("*************************************\n\n");
                                //�������
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
    printf("�����Ľ��Ϊ:");
    for (i=0;i<N;i++)
    {
        printf("%.2lf\t",powers[i]);
    }
    printf("\n***********************************\n");
    return 0;
}
