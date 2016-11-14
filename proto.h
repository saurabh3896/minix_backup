/* Function prototypes. */

struct schedproc;
#include <timers.h>

/* main.c */
int main(void);
void setreply(int proc_nr, int result);

/* schedule.c */
int do_noquantum(message *m_ptr);
int do_start_scheduling(message *m_ptr);
int do_stop_scheduling(message *m_ptr);
int do_nice(message *m_ptr);
void init_scheduling(void);
int _do_set_deadline(message *m_ptr);

/* utility.c */
int no_sys(int who_e, int call_nr);
int sched_isokendpt(int ep, int *proc);
int sched_isemtyendpt(int ep, int *proc);
int accept_message(message *m_ptr);
