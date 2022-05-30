; ModuleID = './test/test_cmp.bc'
source_filename = "./test/test_cmp.pas"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@int1 = global i32 undef
@int2 = global i32 undef
@real1 = global float undef
@real2 = global float undef
@0 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@1 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@2 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@3 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@4 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@5 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@6 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@7 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@8 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@9 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@10 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@11 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@12 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@13 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@14 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@15 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@16 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@17 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@18 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@19 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@20 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define void @main() {
entry:
  store i32 5, i32* @int1, align 4
  store i32 6, i32* @int2, align 4
  %0 = load i32, i32* @int1, align 4
  %1 = load i32, i32* @int2, align 4
  %2 = icmp eq i32 %0, %1
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @0, i32 0, i32 0), i1 %2)
  %3 = load i32, i32* @int1, align 4
  %4 = load i32, i32* @int2, align 4
  %5 = icmp slt i32 %3, %4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @1, i32 0, i32 0), i1 %5)
  %6 = load i32, i32* @int1, align 4
  %7 = load i32, i32* @int2, align 4
  %8 = icmp sle i32 %6, %7
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @2, i32 0, i32 0), i1 %8)
  %9 = load i32, i32* @int1, align 4
  %10 = load i32, i32* @int1, align 4
  %11 = icmp sle i32 %9, %10
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @3, i32 0, i32 0), i1 %11)
  %12 = load i32, i32* @int1, align 4
  %13 = load i32, i32* @int2, align 4
  %14 = icmp sge i32 %12, %13
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @4, i32 0, i32 0), i1 %14)
  %15 = load i32, i32* @int2, align 4
  %16 = load i32, i32* @int2, align 4
  %17 = icmp sge i32 %15, %16
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @5, i32 0, i32 0), i1 %17)
  %18 = load i32, i32* @int1, align 4
  %19 = load i32, i32* @int2, align 4
  %20 = icmp sgt i32 %18, %19
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @6, i32 0, i32 0), i1 %20)
  store float 0x400921FB00000000, float* @real1, align 4
  %21 = load float, float* @real1, align 4
  %22 = fsub float %21, 1.000000e+00
  store float %22, float* @real2, align 4
  %23 = load float, float* @real1, align 4
  %24 = load float, float* @real2, align 4
  %25 = fcmp ueq float %23, %24
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @7, i32 0, i32 0), i1 %25)
  %26 = load float, float* @real1, align 4
  %27 = load float, float* @real2, align 4
  %28 = fcmp ult float %26, %27
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @8, i32 0, i32 0), i1 %28)
  %29 = load float, float* @real1, align 4
  %30 = load float, float* @real2, align 4
  %31 = fcmp ule float %29, %30
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @9, i32 0, i32 0), i1 %31)
  %32 = load float, float* @real1, align 4
  %33 = load float, float* @real1, align 4
  %34 = fcmp ule float %32, %33
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @10, i32 0, i32 0), i1 %34)
  %35 = load float, float* @real1, align 4
  %36 = load float, float* @real2, align 4
  %37 = fcmp uge float %35, %36
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @11, i32 0, i32 0), i1 %37)
  %38 = load float, float* @real2, align 4
  %39 = load float, float* @real2, align 4
  %40 = fcmp uge float %38, %39
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @12, i32 0, i32 0), i1 %40)
  %41 = load float, float* @real1, align 4
  %42 = load float, float* @real2, align 4
  %43 = fcmp ugt float %41, %42
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @13, i32 0, i32 0), i1 %43)
  %44 = load i32, i32* @int1, align 4
  %45 = load float, float* @real2, align 4
  %46 = sitofp i32 %44 to float
  %47 = fcmp ueq float %46, %45
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @14, i32 0, i32 0), i1 %47)
  %48 = load i32, i32* @int1, align 4
  %49 = load float, float* @real2, align 4
  %50 = sitofp i32 %48 to float
  %51 = fcmp ult float %50, %49
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @15, i32 0, i32 0), i1 %51)
  %52 = load i32, i32* @int1, align 4
  %53 = load float, float* @real2, align 4
  %54 = sitofp i32 %52 to float
  %55 = fcmp ule float %54, %53
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @16, i32 0, i32 0), i1 %55)
  %56 = load i32, i32* @int1, align 4
  %57 = load float, float* @real1, align 4
  %58 = sitofp i32 %56 to float
  %59 = fcmp ule float %58, %57
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @17, i32 0, i32 0), i1 %59)
  %60 = load i32, i32* @int1, align 4
  %61 = load float, float* @real2, align 4
  %62 = sitofp i32 %60 to float
  %63 = fcmp uge float %62, %61
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @18, i32 0, i32 0), i1 %63)
  %64 = load i32, i32* @int2, align 4
  %65 = load float, float* @real2, align 4
  %66 = sitofp i32 %64 to float
  %67 = fcmp uge float %66, %65
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @19, i32 0, i32 0), i1 %67)
  %68 = load i32, i32* @int1, align 4
  %69 = load float, float* @real2, align 4
  %70 = sitofp i32 %68 to float
  %71 = fcmp ugt float %70, %69
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @20, i32 0, i32 0), i1 %71)
  ret void
}

declare void @printf(i8* noalias, ...)
