/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef DISABLESYSTEM_BAKE_CONFIG_H
#define DISABLESYSTEM_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <reflecs>

/* Headers of private dependencies */
#ifdef DISABLESYSTEM_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if DISABLESYSTEM_IMPL && defined _MSC_VER
#define DISABLESYSTEM_EXPORT __declspec(dllexport)
#elif DISABLESYSTEM_IMPL
#define DISABLESYSTEM_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define DISABLESYSTEM_EXPORT __declspec(dllimport)
#else
#define DISABLESYSTEM_EXPORT
#endif

#endif

