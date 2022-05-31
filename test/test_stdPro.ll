; ModuleID = './test/test_stdPro.bc'
source_filename = "./test/test_stdPro.pas"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@intVar = global i32 undef
@realVar = global float undef
@a = global [81 x float] undef
@0 = private unnamed_addr constant [7 x i8] c"%d%f%f\00", align 1
@1 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@2 = private unnamed_addr constant [5 x i8] c"%lf\0A\00", align 1
@3 = private unnamed_addr constant [5 x i8] c"%lf\0A\00", align 1

define void @main() {
entry:
  %0 = load i32, i32* @intVar, align 4
  %1 = load float, float* @realVar, align 4
  %2 = fpext float %1 to double
  %3 = load float, float* getelementptr inbounds ([81 x float], [81 x float]* @a, i32 0, i32 19), align 4
  %4 = fpext float %3 to double
  call void (i8*, ...) @scanf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @0, i32 0, i32 0), i32* @intVar, float* @realVar, float* getelementptr inbounds ([81 x float], [81 x float]* @a, i32 0, i32 19))
  %5 = load i32, i32* @intVar, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @1, i32 0, i32 0), i32 %5)
  %6 = load float, float* @realVar, align 4
  %7 = fpext float %6 to double
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @2, i32 0, i32 0), double %7)
  %8 = load float, float* getelementptr inbounds ([81 x float], [81 x float]* @a, i32 0, i32 19), align 4
  %9 = fpext float %8 to double
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @3, i32 0, i32 0), double %9)
  ret void
}

declare void @scanf(i8* noalias, ...)

declare void @printf(i8* noalias, ...)
