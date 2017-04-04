/*******************************************************************************
* 文 件 名: sched_fsm.h
* 创 建 者: Keda Huang
* 版    本: V1.0
* 创建日期: 2017-02-22
* 文件说明: 事件驱动调度器的有限状态机
*******************************************************************************/

#ifndef __SCHED_FSM_H
#define __SCHED_FSM_H

/* 头文件 --------------------------------------------------------------------*/
#include "sched_proto.h"

/* 有限状态机 ----------------------------------------------------------------*/
typedef struct sched_fsm
{
    SchedEventHandler   state;
} sSchedFSM;

/* 状态机函数 ----------------------------------------------------------------*/
void schedFSMCtor(sSchedFSM *fsm, SchedEventHandler initial);
void schedFSMInit(sSchedFSM *fsm, SchedHandle_t me);
void schedFSMDispatch(sSchedFSM *fsm, SchedHandle_t me, SchedEvent_t const *e);

#endif  /* __SCHED_FSM_H */