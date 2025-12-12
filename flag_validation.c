#include "push_swap.h"

static int ft_strcmp(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void init_args(t_args *args)
{
    args->adaptive = 0;
    args->simple = 0;
    args->medium = 0;
    args->complex = 0;
    args->bench = 0;
}

void check_arg(char *arg, t_args *args)
{
	if (ft_strcmp(arg, "--adaptive") == 0)
		args->adaptive++;
	else if (ft_strcmp(arg, "--simple") == 0)
		args->simple++;
	else if (ft_strcmp(arg, "--medium") == 0)
		args->medium++;
	else if (ft_strcmp(arg, "--complex") == 0)
		args->complex++;
	else if (ft_strcmp(arg, "--bench") == 0)
		args->bench++;
}

void valid_args(t_args args)
{
	if (args.adaptive + args.simple + args.medium + args.complex > 1)
		args_error();
	else if (args.bench > 1)
		args_error();
	else
		return ;
}
