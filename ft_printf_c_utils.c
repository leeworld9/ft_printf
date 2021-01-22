/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 08:31:44 by dohelee           #+#    #+#             */
/*   Updated: 2021/01/23 08:35:52 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_c_maxlen(t_printf *data, int param_len)
{
	if (data->pres == 0)
	{
		if (data->width >= param_len)
			data->max_len = data->width;
		else
			data->max_len = param_len;
	}
	else
	{
		if (param_len < data->width && param_len < data->pres)
			data->max_len = data->width;
		else if (data->width >= data->pres)
			data->max_len = data->width;
		else if (param_len < data->pres)
			data->max_len = param_len;
		else
			data->max_len = data->pres;
	}
}