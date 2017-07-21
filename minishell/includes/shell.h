/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thzondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 10:38:33 by thzondo           #+#    #+#             */
/*   Updated: 2017/07/21 10:52:42 by thzondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifindef SHELL_H
# define SHELL_H


// process is a single process
typedef struct process
{
    struct process *next;
    char    **argv;
    pid_t   pid;
    char    completed;
    char    stopped;
    int     status;
}               process;

// if the job is a pipeline of proccess

typedef struct job
{
    struct joob *next;
    char    *command;
    process    *first_process;
    pid_t   pgid;
    char    notified;
    struct  termios tmodes;
    int stdin, stdout, strerr;
}               job;

// head for the active jobs linked list
job *first_job = NULL;

// Find hte active jobs within the indicated pgid


