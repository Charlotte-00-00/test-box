// 2022.9.20





/*                 ������ʵ���� c = a +b

#include<stdio.h>
int main()
{
    int a, b, c;


    while (~scanf("%d%d", &a, &b));
    c = a + b;
    printf("%d\n", c);
    return 0;

}

*/


/*     �������������ж������������е����ֵ
#include<stdio.h>

int main()

{

    int a, b, c;
    int max;

    printf("please sent three numbers : ");

    scanf("%d%d%d", &a, &b, &c);

    max = a;
    if (max < b)

    {
        max = b;

    }

    if (max < c)


    {

        max = c;

    }


    printf("���ֵΪ��%d", max);


    return 0;
}

*/



// Ҫ��"China"������룬��������ǣ���ԭ����ĸ����ĵ�4����ĸ����ԭ������ĸ��
// ���磬��ĸ"A"�����4����ĸ��"E"��"E"����"A"����ˣ�"China"Ӧ��Ϊ"Glmre"��
// �ø���ֵ�ķ���ʹcl��c2��c3��c4��c5���������ֵ�ֱ�Ϊ����C������h������i������n������a�����������㣬ʹc1��c2��c3��c4��c5�ֱ��Ϊ��G������l������m������r������e�����������




// ����1��

/*
#include<stdio.h>
int main()
{
    char c1,c2,c3,c4,c5;
    scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
    printf("%c%c%c%c%c",c1+4,c2+4,c3+4,c4+4,c5+4);

    return 0;
}
*/

// ����2��




/*
#include<stdio.h>

int main()
{
    char s[11];                             //����һ������Ϊ10���ַ�����ע���н�β����
    gets(s);                                //�����ַ���
    for (int i = 0; s[i] != '\0'; i++)      //ѭ������β��'\0'ʱֹͣѭ��
    {
        if (s[i] >= 'A' && s[i] <= 'Z')             //�ж��Ƿ�Ϊ��д��ĸ
        {
            s[i] = (s[i] + 4 - 'A') % 26 + 'A';     //��д��ĸ����
        }
        if (s[i] >= 'a' && s[i] <= 'z')             //�ж��Ƿ�ΪСд��ĸA
        {
            s[i] = (s[i] + 4 - 'a') % 26 + 'a';     //Сд��ĸ����
        }
    }
    puts(s);                                //����ַ���
    return 0;
}

*/



/*��һͷĸţ����ÿ�������һͷСĸţ��ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��ÿ�����Ҳ��һͷСĸţ��
����ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��*/

/*���������ɶ������ʵ����ɣ�ÿ������ʵ��ռһ�У�����һ������n(0<n<55)��n�ĺ�������Ŀ��������
n=0��ʾ�������ݵĽ�������������*/

#include<stdio.h>

int fun(int n)   // ���㺯��


{
    if (n <= 4)  // ǰ4��

        return n;

    else         // 4֮����


        return fun(n - 1) + fun(n - 3);


    return n;
}



int main(void)   // ������ֵ

{

    int n;

    scanf("%d", &n); 

    printf("%d", fun(n));

}

