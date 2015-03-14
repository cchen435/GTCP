export GR_DO_PHASE_PERFCTR=0
export GR_IS_SIMULATION=1
export GR_DO_SUSPEND=1
export NUM_NODES=1
export OMPI_COMM_WORLD_LOCAL_RANK=0
export GR_MIN_PHASE_LEN=10
export GR_DO_STUB=0

mpirun -np 2  ./bench_gtc_sith_gcc_debug input/A.txt 1 2
#mpirun --allow-run-as-root -np 2  ./bench_gtc_sith_gcc_debug input/A.txt 1 2
