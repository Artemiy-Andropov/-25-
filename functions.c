#include <stdio.h>
#include <math.h>

void Exercise_1()
{
    int x = 0;
    int a = 0;
    int c = 0;
    
    printf("Введите число:");
    
    scanf("%d", &x);
    
    printf("Введите число:");
    
    scanf("%d", &a);
    
    printf("Введите число:");
    
    scanf("%d", &c);
    
    double Expres_1 = exp(x) - pow(cos(pow(x, 2) * pow(a, 5)), 4);

    double Expres_2 = pow(atan(a - pow(x, 5)), 4);

    double Expres_3 = exp(1) * sqrt(fabs(a + x * pow(c, 4)));

    double L = (sqrt(Expres_1) + Expres_2) / Expres_3;

    printf("%g", L);
}

void Exercise_2()
{
    int t = 0;
    scanf("%d", &t);
    
    long V = 0;

    if (t < 0)
    {
        printf("Заданное вами число меньше чем ");
    }
    else
    {
        // long S = pow(t, 3) - 3 * pow(t, 2) + 2;

        V = 3 * pow(t, 2) - 6 * t; // V - производная от S
    }
    
    long answer = fabs(V); // Я считаю, что скорость - это векторная величина, т.е, когда она отрицательная, это просто движение с определенной скоростью назад

    printf("%ld", answer);
}

void Exercise_3()
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    printf("Введите число: ");
    
    scanf("%d", &a);
    
    printf("Введите число: ");
    
    scanf("%d", &b);
    
    printf("Введите число: ");
    
    scanf("%d", &c);
    
    float X_1 = 0;
    
    float X_2 = 0;
    
    if (a == 0)
    {
        printf("Ошибка, введенная переменная <a> равна 0");
    }
    else
    {
        long Discrim = pow(b, 2) + ((-4) * (a) * (c));
        
        float X_1 = ((-b) - sqrt(Discrim)) / (2 * (a));
        
        float X_2 = ((-b) + sqrt(Discrim)) / (2 * (a));
        
        if (X_1 == X_2)
        {
            printf("Корень этого уравнения = %F", X_1);
        }
        else
        {
            printf("Первый корень этого уравнения = %F\n", X_1);
                
            printf("Второй корень этого уравнения = %F\n", X_2);
        }
    }
    
}

void Exercise_5()
{
    int n = 4; // В задании не просилось, но число n можно изменить, чтобы найти числа Армстронга в другом промежутке
    
    for(int i = pow(10, n-1); i < pow(10, n); i++)
    {
        float sum = 0;
        
        int j = i;
        
        while (j > 0)
        {
            float number = j % 10;
            
            sum += pow(number, n);
            
            j /= 10;
        }
        
        if (sum == i)
        {
            printf("Это число Армстронга: %d\n", i);
        }
    } 
}

void Exercise_6()
{
    int n = 0;
    
    printf("Введите длинну массива: ");
    
    scanf("%d", &n);
    
    const int j = n;
    
    int arr[j];
    
    int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        int number = 0;
        
        printf("Введите число: ");
        
        scanf("%d", &number);
        
        arr[i] = number;
        
        if (arr[i] > 1 || arr[i] < 0)
        {
            printf("Ошибка. Число должно быть двоичным (введенные wbahs не превышают 1 и являются положительными).");
            
            sum = 0;
            
            break;
        }
        else
        {
            sum += arr[i] * pow(2, i);
        }
    }
    
    if (sum != 0) 
        printf("Заданное число в десятичном виде: %d", sum);
    
}
