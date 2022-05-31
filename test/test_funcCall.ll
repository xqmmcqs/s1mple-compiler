; ModuleID = './test/test_funcCall.bc'
source_filename = "./test/test_funcCall.pas"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@0 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@1 = private unnamed_addr constant [5 x i8] c"%lf\0A\00", align 1
@2 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@3 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define void @main() {
entry:
  %0 = call i32 @testFunc1(i32 2022)
  %1 = call i32 @testFunc2()
  call void @testPro1(i32 2022)
  call void @testPro2()
  ret void
}

define i32 @testFunc1(i32 %intVarTem) {
Para_Ret:
  %0 = alloca i32, align 4
  %1 = alloca i32, align 4
  store i32 %intVarTem, i32* %1, align 4
  br label %entry

entry:                                            ; preds = %Para_Ret
  %2 = load i32, i32* %1, align 4
  %3 = add i32 %2, 1
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @0, i32 0, i32 0), i32 %3)
  %4 = load i32, i32* %0, align 4
  ret i32 %4
}

declare void @printf(i8* noalias, ...)

define i32 @testFunc2() {
Para_Ret:
  %0 = alloca i32, align 4
  br label %entry

entry:                                            ; preds = %Para_Ret
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @1, i32 0, i32 0), double 0x400921FA00000000)
  %1 = load i32, i32* %0, align 4
  ret i32 %1
}

define void @testPro1(i32 %intVarTem) {
Para_Ret:
  %0 = alloca i32, align 4
  store i32 %intVarTem, i32* %0, align 4
  br label %entry

entry:                                            ; preds = %Para_Ret
  %1 = load i32, i32* %0, align 4
  %2 = sub i32 %1, 1
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @2, i32 0, i32 0), i32 %2)
  ret void
}

define void @testPro2() {
Para_Ret:
  br label %entry

entry:                                            ; preds = %Para_Ret
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @3, i32 0, i32 0), i32 114514)
  ret void
}
