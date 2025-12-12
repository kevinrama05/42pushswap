/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrama10 <ekrama10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:18:40 by ekrama10          #+#    #+#             */
/*   Updated: 2025/12/11 11:36:13 by ekrama10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_args a;
	int *list;
	int *copy_list;

    init_args(&a);
    check_arg(argv[1], &a);
	check_arg(argv[2], &a);
	valid_args(a);
	a.args = a.simple + a.medium + a.complex + a.complex + a.adaptive;
	a.args += a.bench;
	if (a.simple + a.medium + a.complex + a.adaptive == 0)
		a.adaptive++;
	list = create_list(argv + 1 + a.args, argc - 1 - a.args);
}
