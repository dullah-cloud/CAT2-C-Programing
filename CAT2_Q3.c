#include <stdio.h>

int main() {
    float hoursWorked, hourlyWage;
    float grossPay, tax, netPay;
    float overtimeHours, overtimePay;
    
    
    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);
    
    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);
    
  
    if (hoursWorked <= 40) {
        grossPay = hoursWorked * hourlyWage;
   
 } else {
        grossPay = 40 * hourlyWage;
        overtimeHours = hoursWorked - 40;
        overtimePay = overtimeHours * (1.5 * hourlyWage);
        grossPay += overtimePay;
    }
    
    if (grossPay <= 600) {
        tax = grossPay * 0.15; // 15% tax on the entire gross pay
   
 } else {
        tax = 600 * 0.15;
        tax += (grossPay - 600) * 0.20;
    }
    
    netPay = grossPay - tax;
    
   
    printf("\nGross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", netPay);
    
    return 0;
}

