#include <stdio.h>                                                                                                

/**                                                                                                                                   
 * main - Entry point                    
 *                                                                                                                                    
 * Return: Always 0 (Correct)                                                                                                         
 */                                                                                                                                   
char alphabet;

int main(void)                                                                                                                        
{                                                                                                                                     
for (alphabet = "a"; alphabet <= "z"; alphabet++)
{
putchar(alphabet);
}

putchar("\n");                                                                                                                          

return (0);                                                                                                                           

}
