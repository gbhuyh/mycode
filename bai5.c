#include <stdio.h>

// Enum tên các công ty
typedef enum {
  GOOGLE,
  FACEBOOK,
  XEROX,
  YAHOO,
  EBAY,
  MICROSOFT
} Company;

int main() {
    enum Company { google, facebook, xerox, yahoo, ebay, microsoft };

    printf("The value of google is: %d\n",google);
    printf("The value of facebook is: %d\n",facebook);
    printf("The value of xerox is: %d\n", xerox);
    printf("The value of yahoo is: %d\n", yahoo);
    printf("The value of ebay is: %d\n", ebay);
    printf("The value of microsoft is: %d\n", microsoft);



 
   
  return 0;
}
