/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:07:09 by ecollot           #+#    #+#             */
/*   Updated: 2013/12/02 15:19:08 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		df_isalpha(int a)
{
	return ((a >= 97 && a <= 122) || (a >= 65 && a <= 90));
}
