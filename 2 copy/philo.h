#ifndef PHILO_H
#define PHILO_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/time.h>
#include <fcntl.h>

typeofdef struct    s_philo
{
    int index;
    int countEat;
    int time;
    int lf;
    int rf;
    pthread_t thread;
    pthread_mutex_t mutex;
    struct s_initData *initData;
}                   t_philo;

typeofdef struct    s_initData
{
    int kol;
    int sleep;
    int eat;
    int die;
    int countEat;
    int time;
    int finish;
    int addFatPhilo;
    t_philo *philo;
    pthread_mutex_t *fork;
    pthread_mutex_t mutex;
}                   t_initData

int cleanAll(t_initData *initData);
int error(t_initData *initData, int i);
void ft_putchar_fd(int fd, char c);
void ft_putnbr_fd(int fd, int number);
int ft_strlen(char *str);
int atoi2(char *str);
int atoi(char *str);
int initPhilo(t_initData *initData);
int initInput(int argc, char *argv, t_initData *initData);
int main(int argc, char **argv);
void takeForkOn(t_philo *philo);
void takeForkOff(t_philo *philo);
void eat(t_philo *philo);
void sleep(t_philo *philo);
int timer(void);
int initThread (t_initData *initData);
int countEat(void *args);
void *deadPhilo(void *args);
void *startProcess(void *data);
char *output(int i);
void show(t_philo philo, int i);

#endif