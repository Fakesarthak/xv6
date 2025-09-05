
# xv6: Extended Scheduling and Memory Management
### Course Project (Aug 2024 – Oct 2024)



This repository contains the modified source files from the xv6 operating system that were implemented as part of my course project. The focus of this work is on process scheduling and memory management enhancements.

## Features Implemented

### 1. Scheduling Algorithms

#### Lottery Scheduling:
Each process is assigned a number of tickets.
The scheduler randomly selects a winning ticket to decide which process runs, ensuring probabilistic fairness.
#### Shortest Job First (SJF) Scheduling:
Scheduler selects the process with the shortest burst time.
Burst times are configurable through a new system call.

### 2. System Calls

#### Added new system calls to:
Retrieve process metadata (PID, state, runtime, etc.).
Configure scheduling parameters (tickets for lottery, burst time for SJF).
Support user-space interaction with the scheduler.

### 3. Memory Management Enhancements

#### Lazy Allocation:
Pages are allocated only when accessed, reducing memory waste.
Paging with LRU Policy:
Least Recently Used (LRU) page replacement for efficient memory usage.
#### Kernel Processes for Memory Handling:
Kernel background processes assist in managing paging and memory eviction.

## 📂 Repository Structure

This repo contains only the modified files from xv6, not the entire source tree.
proc.c / proc.h → Scheduler modifications, new system calls.  

sysproc.c / syscall.h / usys.S → System call definitions and user-space interface.  

vm.c / mmu.h → Memory management (lazy allocation + paging).  

Any additional test programs are included in user/.  

## 🛠️ How to Use

Clone the original xv6 repository:  

1. git clone https://github.com/mit-pdos/xv6-public.git
cd xv6-public

2. Copy the modified files from this repo into the xv6 source tree (overwrite existing files).

3/ Build and run xv6 using QEMU:

4. make qemu

## 📖 References

#### MIT xv6 Book

#### MIT 6.S081 Operating Systems Course
