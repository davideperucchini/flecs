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

#ifndef DEMANDSYSTEM_BAKE_CONFIG_H
#define DEMANDSYSTEM_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <reflecs>

/* Headers of private dependencies */
#ifdef DEMANDSYSTEM_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if DEMANDSYSTEM_IMPL && defined _MSC_VER
#define DEMANDSYSTEM_EXPORT __declspec(dllexport)
#elif DEMANDSYSTEM_IMPL
#define DEMANDSYSTEM_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define DEMANDSYSTEM_EXPORT __declspec(dllimport)
#else
#define DEMANDSYSTEM_EXPORT
#endif

#endif

