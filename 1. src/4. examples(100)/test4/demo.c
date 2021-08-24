/*
* 项目名称： 一个C语言的用例
* 项目功能： 计算年月日为当年的第几天
* 项目时间： 2021-08-19
* 项目作者： ZZD
*/
// ===================== 系统头文件 ===================================
# include<stdio.h>
// ========================================================================
// 函数名称：main
// 函数功能：根据输入年月日判断为某年的第几天
// 输入参数：year month day 由SCANF函数输入
// 输出参数：无
// 全局变量：无
// 调用模块：printf scanf switch
// ========================================================================
int main(void *arg)
{
    int year = 0, month = 0, day = 0, leap =0, year_day_sum = 0;
    printf("please input years, month, day\n");// 打印信息
    scanf("%d %d %d", &year, &month, &day);// 键盘输入年、月、日
    switch (month)
    {
        case 1:// 当月份为1月份时间
            year_day_sum = 0;
            break;
        case 2:// 当月份为2月份时间
            year_day_sum = 31;
            break;
        case 3:// 当月份为3月份时间
            year_day_sum = 31 + 28;
            break;
        case 4:// 当月份为4月份时间
            year_day_sum = 31 + 28 + 31;
            break;        
        case 5:// 当月份为5月份时间
            year_day_sum = 31 + 28 + 31 + 30;
            break;   
        case 6:// 当月份为6月份时间
            year_day_sum = 31 + 28 + 31 + 30 + 31;
            break;         
        case 7:// 当月份为7月份时间
            year_day_sum = 31 + 28 + 31 + 30 + 31 + 30;
            break;
        case 8:// 当月份为8月份时间
            year_day_sum = 31 + 28 + 31 + 30 + 31 + 30 + 31;
            break;
        case 9:// 当月份为9月份时间
            year_day_sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
            break;
        case 10:// 当月份为10月份时间
            year_day_sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            break;
        case 11:// 当月份为11月份时间
            year_day_sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 30;
            break;
        case 12:// 当月份为11月份时间
            year_day_sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 30 + 30;
            break;       
        default:
            printf(" input month error\n");// 打印信息
            break;
    }
    // 判断是否为闰年？
    if (!(year % 400))
    {
        leap = 1;
    }
    else
    {
        leap = 0;  
    }
    // 计算为第几天
    if((month > 2) && (leap == 1))
    {
        year_day_sum = year_day_sum + leap + day;
    }
    else
    {
        year_day_sum = year_day_sum + leap + day; 
    }
    printf("%d年%d月%d日为第%d天\n", year, month, day, year_day_sum);// 打印信息
    return (0);
}