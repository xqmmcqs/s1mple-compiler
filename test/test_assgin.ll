; ModuleID = './test/test_assgin.bc'
source_filename = "./test/test_assgin.pas"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@conInt = constant i32 27
@conReal = constant float 0x40091EB860000000
@varInt1 = global i32 undef
@varInt2 = global i32 undef
@varReal1 = global float undef
@varReal2 = global float undef
@a = global [81 x float] undef
@0 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@1 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@2 = private unnamed_addr constant [5 x i8] c"%lf\0A\00", align 1
@3 = private unnamed_addr constant [5 x i8] c"%lf\0A\00", align 1
@4 = private unnamed_addr constant [5 x i8] c"%lf\0A\00", align 1

define void @main() {
entry:
  %0 = load i32, i32* @conInt, align 4
  %1 = load i32, i32* @conInt, align 4
  %2 = mul i32 %0, %1
  store i32 %2, i32* @varInt1, align 4
  %3 = load i32, i32* @conInt, align 4
  %4 = mul i32 2, %3
  store i32 %4, i32* @varInt2, align 4
  %5 = load float, float* @conReal, align 4
  %6 = load i32, i32* @varInt1, align 4
  %7 = sitofp i32 %6 to float
  %8 = fmul float %5, %7
  store float %8, float* @varReal1, align 4
  %9 = load float, float* @conReal, align 4
  %10 = load i32, i32* @varInt2, align 4
  %11 = sitofp i32 %10 to float
  %12 = fmul float %9, %11
  store float %12, float* @varReal2, align 4
  %13 = load float, float* @varReal1, align 4
  %14 = load float, float* @varReal2, align 4
  %15 = fmul float %13, %14
  store float %15, float* getelementptr inbounds ([81 x float], [81 x float]* @a, i32 0, i32 11), align 4
  %16 = load i32, i32* @varInt1, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @0, i32 0, i32 0), i32 %16)
  %17 = load i32, i32* @varInt2, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @1, i32 0, i32 0), i32 %17)
  %18 = load float, float* @varReal1, align 4
  %19 = fpext float %18 to double
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @2, i32 0, i32 0), double %19)
  %20 = load float, float* @varReal2, align 4
  %21 = fpext float %20 to double
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @3, i32 0, i32 0), double %21)
  %22 = load float, float* getelementptr inbounds ([81 x float], [81 x float]* @a, i32 0, i32 11), align 4
  %23 = fpext float %22 to double
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @4, i32 0, i32 0), double %23)
  ret void
}

declare void @printf(i8* noalias, ...)
