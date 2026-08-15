# Changelog

All notable changes to this project will be documented in this file.

## [Unstable - local edit]
Based on [Sfabi28/libft_tester](https://github.com/Sfabi28/libft_tester).
### Fixed
- Removed duplicate/dummy test cases (`ft_lstdelone`, `ft_strmapi`, `ft_lstsize`, `ft_striteri`) that were repeating the same check under different IDs, and replaced them with distinct edge-case tests.
- Fixed a routing bug where test IDs 406-410 were silently vacuous (`main.c` range for `ft_strtrim` did not match the IDs actually used inside `test_split.c`), causing 5 tests to "pass" without checking anything.
- Fixed a use-after-free / double-free in the `ft_lstdelone(l, NULL)` test case: the test accessed `l->content` and called `free(l)` after `ft_lstdelone` had already freed `l`. The content pointer is now saved before the call.

## [1.4.0] - 2026-08-14
### Added
- `ft_atoi`: empty string, whitespace-only string, lone `+` / `-` sign.
- `ft_calloc`: multiplication-overflow case that isn't just `SIZE_MAX,SIZE_MAX`.
- `ft_substr`: `start` passed as `(unsigned int)-1`.
- `ft_lstmap`: verifies the original list is left untouched after mapping.
- `ft_lstdelone`: verifies only the given node is freed, `next` node is untouched.
- All test IDs renumbered sequentially (1-627); `main.c`, `header.h` and `.launch.sh` updated accordingly.

## [1.3.0] - 2026-01-14
### Added
- **Files-handling**: sources put in srcs directory to improve QoL
- **Makefile**: added Makefile


## [1.2.0] - 2026-01-13
### Added
- **Executable**: Now the tester is already executable


## [1.1.0] - 2025-12-24
### Added
- **Auto-Updater**: The script now checks for updates automatically on startup.
- **Smart Valgrind**: Valgrind only runs on memory-heavy functions (speed improvement).

### Fixed
- Corrected the path for the `libft.a` check.

## [1.0.0] - 2025-12-21
### Added
- Initial release of the Libft Tester based on [Sfabi28/libft_tester](https://github.com/Sfabi28/libft_tester)
- Support for Mandatory and Bonus parts.
- Norminette check integration.
