// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(Giant, Log, All);

#define GTLOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
#define GTLOG_S(Verbosity) UE_LOG(Giant, Verbosity, TEXT("%s"), *GTLOG_CALLINFO)
#define GTLOG(Verbosity, Format, ...) UE_LOG(Giant, Verbosity, TEXT("%s"), *GTLOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))

#define GTCHECK(Expr, ...) {if(!(Expr)) {GTLOG(Error, TEXT("ASSERTION : %s"), TEXT("'"#Expr"'")); return __VA_ARGS__;}} 