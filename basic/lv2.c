// 输入输出,for循环练习
// 输入树叶宽度和树干高度,打印出对应的圣诞树

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 树干高度height,树叶宽度width
    int height, width;
    int i = 0, j = 0;
    printf("请输入圣诞树的(宽度,高度): ");
    scanf("%d,%d", &width, &height);
    // 接收输入的回车键
    getchar();

    // 打印树叶
    for (i = width; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * (width - i) + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // 打印树干
    for (i = height - width; i > 0; i--)
    {
        for (j = 0; j < width; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
