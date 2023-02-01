
#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;
	int j;

	sign =1;
	j=0;
	i = 0;
	res=0;
	if(str[i]>=9 && str[i]<=13 && str[i] == 32)
		i++;
	if(str[i] == '-')
		sign = -1;
		++j;
		printf("%d\n%d\n",j,i);
	if (j >1)
		return 0;
	if(str[i] =='-'||str[i] =='+')
		i++;
	while(str[i]){
	if(str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i] -'0';
		i++;}
	return (res+sign);
}

int main(){
	char *c = "-1112";

	printf("%d\n",ft_atoi(c));
	printf("%d\n",atoi(c));

}