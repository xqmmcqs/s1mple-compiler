; ModuleID = './test/test_calculate.bc'
source_filename = "./test/test_calculate.pas"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@conInt = constant i32 27
@conReal = constant float 0x40091EB860000000
@varInt1 = global i32 undef
@varInt2 = global i32 undef
@varReal1 = global float undef
@varReal2 = global float undef
@divResult = global float undef
@varBool1 = global i1 undef
@varBool2 = global i1 undef
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
  %4 = load i32, i32* @conInt, align 4
  %5 = add i32 %3, %4
  store i32 %5, i32* @varInt2, align 4
  %6 = load float, float* @conReal, align 4
  %7 = load i32, i32* @varInt1, align 4
  %8 = sitofp i32 %7 to float
  %9 = fmul float %6, %8
  store float %9, float* @varReal1, align 4
  %10 = load float, float* @conReal, align 4
  %11 = load i32, i32* @varInt2, align 4
  %12 = sitofp i32 %11 to float
  %13 = fmul float %10, %12
  store float %13, float* @varReal2, align 4
  %14 = load i32, i32* @varInt1, align 4
  %15 = load float, float* @conReal, align 4
  %16 = sitofp i32 %14 to float
  %17 = fadd float %16, %15
  %18 = load float, float* @conReal, align 4
  %19 = fmul float %17, %18
  %20 = load i32, i32* @varInt2, align 4
  %21 = load float, float* @varReal1, align 4
  %22 = sitofp i32 %20 to float
  %23 = fdiv float %22, %21
  %24 = load float, float* @varReal2, align 4
  %25 = fsub float %23, %24
  %26 = fdiv float %19, %25
  store float %26, float* @divResult, align 4
  %27 = load i32, i32* @varInt1, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @0, i32 0, i32 0), i32 %27)
  %28 = load i32, i32* @varInt2, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @1, i32 0, i32 0), i32 %28)
  %29 = load float, float* @varReal1, align 4
  %30 = fpext float %29 to double
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @2, i32 0, i32 0), double %30)
  %31 = load float, float* @varReal2, align 4
  %32 = fpext float %31 to double
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @3, i32 0, i32 0), double %32)
  %33 = load float, float* @divResult, align 4
  %34 = fpext float %33 to double
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @4, i32 0, i32 0), double %34)
  ret void
}

declare void @printf(i8* noalias, ...)
