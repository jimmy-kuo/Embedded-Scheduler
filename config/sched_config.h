/*******************************************************************************
* 文 件 名: sched_config.h
* 创 建 者: Keda Huang
* 版    本: V1.0
* 创建日期: 2016-11-14
* 文件说明: 事件驱动调度器的配置
*******************************************************************************/

#ifndef __SCHED_CONFIG_H
#define __SCHED_CONFIG_H

/*******************************************************************************

                                  底层接口配置

*******************************************************************************/

/* 处理器字节对齐 */
#define SCHED_BYTE_ALIGNMENT        ( CPU_BYTE_ALIGNMENT )

/* 调度器节拍频率 */
#define SCHED_TICK_HZ               ( CPU_TICK_HZ )

/* 事件队列偏移类型配置
 * 0 - 极小, 事件队列长度不能超过255
 * 1 - 标准, 事件队列长度没有限制
 */
#define SCHED_EVTPOS_TYPE           ( 1 )

/* 事件信号变量类型配置
 * 0 - 使用无符号 8bit整型
 * 1 - 使用无符号16bit整型
 * 2 - 使用无符号32bit整型
 */
#define SCHED_EVTSIG_TYPE           ( 2 )

/* 事件消息变量类型配置
 * 0 - 使用无符号 8bit整型
 * 1 - 使用无符号16bit整型
 * 2 - 使用无符号32bit整型
 */
#define SCHED_EVTMSG_TYPE           ( 2 )

/* 调度器16bit节拍使能
 * 0 - 使用32bit节拍
 * 1 - 使用16bit节拍
 */
#define SCHED_16BIT_TICK_EN         ( 0 )

/*******************************************************************************

                                  用户使用配置

*******************************************************************************/

/* 调度器最低优先级 */
#define SCHED_LOWEST_PRIORITY       ( 3 )

/* 调度器内存分配大小 */
#define SCHED_HEAP_SIZE             ( 1000 )

/*******************************************************************************

                                  功能裁剪配置

*******************************************************************************/

/* 调度器断言使能
 * 0 - 禁止调度器断言
 * 1 - 使能调度器断言
 */
#define SCHED_ASSERT_EN             ( 1 )

/* 空闲任务Hook使能
 * 0 - 禁止空闲任务Hook
 * 1 - 使能空闲任务Hook
 */
#define SCHED_IDLE_HOOK_EN          ( 0 )

/*******************************************************************************

                                  内部参数配置

*******************************************************************************/

/* 优先级记录表大小 */
#define SCHED_PRIOTBL_TBL_SIZE      ( 3 )

#endif  /* __SCHED_CONFIG_H */
