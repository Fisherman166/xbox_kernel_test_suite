#ifndef MN_TESTS_H
#define MN_TESTS_H

void test_MmGlobalData();
void test_MmAllocateContiguousMemory();
void test_MmAllocateContiguousMemoryEx();
void test_MmAllocateSystemMemory();
void test_MmClaimGpuInstanceMemory();
void test_MmCreateKernelStack();
void test_MmDeleteKernelStack();
void test_MmFreeContiguousMemory();
void test_MmFreeSystemMemory();
void test_MmGetPhysicalAddress();
void test_MmIsAddressValid();
void test_MmLockUnlockBufferPages();
void test_MmLockUnlockPhysicalPage();
void test_MmMapIoSpace();
void test_MmPersistContiguousMemory();
void test_MmQueryAddressProtect();
void test_MmQueryAllocationSize();
void test_MmQueryStatistics();
void test_MmSetAddressProtect();
void test_MmUnmapIoSpace();
void test_MmDbgAllocateMemory();
void test_MmDbgFreeMemory();
void test_MmDbgQueryAvailablePages();
void test_MmDbgReleaseAddress();
void test_MmDbgWriteCheck();


#endif
