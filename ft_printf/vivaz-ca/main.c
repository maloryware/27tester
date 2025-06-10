/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __usr_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 02:25:44 by Mal               #+#    #+#             */
/*   Updated: 2025/06/02 16:16:02 by Mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* #include "etc/stdlibs/mini_libft.c"
#include "etc/stdlibs/substr.c"
#include "etc/stdlibs/atoi.c"
#include "etc/stdlibs/itoa.c"
#include "etc/printers/print_char.c"
#include "etc/printers/print_dec_int.c"
#include "etc/printers/print_hex.c"
#include "etc/printers/print_pointer.c"
#include "etc/printers/print_string.c"
#include "etc/printers/print_uint.c"
#include "etc/format_delegator.c"
#include "etc/aux.c"
#include "ft_printf.c" */
#include <stdio.h>

static void	check(int mine, int theirs)
{
	printf("theirs: %d, mine: %d\n\n", theirs, mine);
	if (mine == theirs)
		printf("no count diff! :D\n\n\n");
	else
		printf("--> DIFF DETECTED: %d\n\n\n", mine - theirs);
}

int main()
{
	// something something main very muito fixe - vinny aka idfk shrug || skibidy sigma
	char *var = "There was a time I used to scratch my nuts and it didn't bleed";
	int vini_gostoso = 14;
	int mine;
	int theirs;

	printf("testing fucking -");
	theirs = printf("\n\n%s!!!\n", var);
	mine = ft_printf("\n\n%s!!!\n", var);
	check(mine, theirs);

	printf("\ntesting fucking +\n\n");
	theirs = printf("%+d\n", vini_gostoso);
	mine = ft_printf("%+d\n", vini_gostoso);
	check(mine, theirs);

	printf("\ntesting fucking ' '\n\n");
	theirs = printf("%-+13.5d\n", vini_gostoso);
	mine = ft_printf("%-+13.5d\n", vini_gostoso);
	check(mine, theirs);
	theirs = printf("% -43.25d\n", vini_gostoso);
	mine = ft_printf("% -43.25d\n", vini_gostoso);
	check(mine, theirs);

	unsigned int hashitagui = 3e8;
	printf("/nTestinf the nakye west #\n\n");
	theirs = printf("%#x\n", hashitagui);
	mine = ft_printf("%#x\n", hashitagui);
	check(mine, theirs);

	printf("Obrigado vini por me ajudar tenho muita dificuldade :D <3 nya~\n");
}

