/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thzondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 10:54:47 by thzondo           #+#    #+#             */
/*   Updated: 2017/07/21 16:20:08 by thzondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// find the active job using the indicated pgid
job     *find_job(pid_t pgid)
{
    job     *j;

    j = first;
    while (j)
    {
        j = j->next;
        (j->pgid == pgid)
            return (j);
    }
    return (NULL);
}

//Command handler
int     Command_Handler(char    **str)
{
    int     i;
    int     j;

    int     fileDescriptor;
    int     standardOut;

    int     aux;
    int     background;
    
    i = 0;
    j = 0;
    background = 0;
    char    *argv_aux[256];
    while (args[j] != NULL)
    {
        if ((strcmp(args[j], ">") == 0) || (strcmp(args[j], "<") == 0) || (strcmp(args[j], "&") == 0))
        {
            break;
        }
        argc_aux[j] = args[j];
        j++;
    }
    if(strcmp(args[0], "exit") == 0)
        exit(0);
    else if(strcmp(argc[0], "pwd") == 0)
    {
        if (args[j] != NULL)
        {
            if ((strcmp(args[j], ">") == 0) && (args[j + 1] != NULL))
            {
                fileDescriptor = dup(STDOUT_FILENO);

                dup2(fileDescriptor, STDOUT_FILENO);
                close(fileDescriptor);
                ft_putstr(getcwd(currentDirectory, 1024));
                dup2(standardOut, STDOUT_FILENO);
            }
            else
            {
                ft_putstr(getcwd(currentDirectory, 1024));
            }
            else if(strcmp(args[0], "clear") == 0)
                //system(clear);
            else if(strcmp(args[0], "cd") == 0)
                //changeDirectory(args);
            else if(strcmp(args[0], "environ") == 0)
            {
                if (args[j] == NULL)
                {
                    if ((strcmp(args[j], ">") == 0) && (args[j + 1] != NULL))
                    {


// Rreturn true if all proccess in the job have stopped or completed
int     job_is_completed (job *j)
{
    process     *p;

    while ()
