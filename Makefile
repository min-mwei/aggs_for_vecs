MODULES = aggs_for_vecs
EXTENSION = aggs_for_vecs
DATA = aggs_for_vecs--1.0.sql

PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)

test:
	./test/setup.sh
	PATH="./test/bats:$$PATH" bats test

bench:
	./bench/setup.sh
	./bench/bench-all.sh | tee bench-results.txt

bench-results.txt: bench

bench-report.txt: bench-results.txt
	./bench/format-table.rb < bench-results.txt | tee bench-report.txt

.PHONY: test bench
