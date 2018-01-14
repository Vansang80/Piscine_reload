/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:14:37 by pasnguye          #+#    #+#             */
/*   Updated: 2017/11/06 17:42:24 by pasnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char lettre_a;

	lettre_a = 'a';
	while (lettre_a <= 'z')
	{
		ft_putchar(lettre_a);
		lettre_a++;
	}
}
