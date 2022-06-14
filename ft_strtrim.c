char* ft_strtrim(char const* s1, char const* set)
{
char *init;
char *end;
int initi;
int endi;

endi = ft_strlen(set);
initi = 0;
while(set[initi++])
	init = ft_strchr(set[initi]);
while(set[endi--])
	end = ft_strrchr(set[enti]);
return (ft_substr(s1,init,endi))
