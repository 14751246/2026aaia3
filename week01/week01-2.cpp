///week01-2.cpp SOIT106_ADVANCE_001
#include <iostream>
int main()
{
	int a;
	std::cin >> a;
	int b = a, ans=0;
	while(a>0){
	ans = ans*10+a%10;
	a = a/10;
	}
	std::cout << b << ans << b+ans; // WRONG-ASNWER
	//std::cout << b << "+" << ans << "=" << b+ans <<std::endl;
	//std::cout << b << "+" << ans << "=" << b+ans <<std::endl;
	//printf("%d+%d=%d\n", b, ans, b+ans);
}
