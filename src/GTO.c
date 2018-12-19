#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

int main(int argc, char *argv[])
{
  fprintf(stderr, 
  "                                                                          \n"
  "                                                                          \n"
  "                    ██████╗████████╗ ██████╗                              \n"
  "                   ██╔════╝╚══██╔══╝██╔═══██╗                             \n"
  "                   ██║  ███╗  ██║   ██║   ██║                             \n"
  "                   ██║   ██║  ██║   ██║   ██║                             \n"
  "                   ╚██████╔╝  ██║   ╚██████╔╝                             \n"
  "                    ╚═════╝   ╚═╝    ╚═════╝                              \n"
  "                                                                          \n"
  "NAME                                                                      \n"
  "      GTO v%u.%u,                                                         \n"
  "      The Genomics Toolkit.                                               \n"
  "                                                                          \n"
  "AUTHORS                                                                   \n"
  "      João Almeida        j.r.dealmeida@udc.es                            \n"
  "      Diogo Pratas        pratas@ua.pt                                    \n"
  "                                                                          \n"
  "SYNOPSIS                                                                  \n"
  "      ./gto_[PROGRAM]                                                     \n"
  "                                                                          \n"
  "SAMPLE                                                                    \n"
  "      Run Info:  ./gto_info < sequence.txt                                \n"
  "                                                                          \n"
  "DESCRIPTION                                                               \n"
  "      A complete set of fast and efficient tools for genomics.            \n"
  "      The gto works as the \"LEGOs\", since it allows multiple            \n"
  "      combinations through the usage of multiple programs with            \n"
  "      pipes. The gto includes multiple functions, such as view,           \n"
  "      convert, compress, simulate, analyze, invert, modify, and           \n"
  "      many others.                                                        \n"
  "                                                                          \n"
  "PROGRAMS                                                                  \n"
  "      [gto_info]                                                          \n"
  "          It gives the basic properties of the file, namely               \n"
  "          size, cardinality, distribution percentage of the               \n"
  "          symbols, among others.                                          \n"
  "                                                                          \n"
  //Amino Acid Sequence Tools
  "      [gto_amino_acid_to_group]                                           \n"
  "          It converts an amino acid sequence to a group sequence.         \n"
  "                                                                          \n"
  "      [gto_amino_acid_to_pseudo_dna]                                      \n"
  "          It converts an amino acid (protein) sequence to a               \n"
  "          pseudo DNA sequence.                                            \n"
  "                                                                          \n"
  //FASTQ_Tools
  "      [gto_fastq_to_fasta]                                                \n"
  "          It converts a FASTQ file into a FASTA file format.              \n"
  "                                                                          \n"
  "      [gto_fastq_to_mfasta]                                               \n"
  "          It converts a FASTQ file format to a pseudo Multi-FASTA         \n"
  "          file.                                                           \n"
  "                                                                          \n"
  "      [gto_fastq_exclude_n]                                               \n"
  "          It discards the FASTQ reads with the minimum number of          \n" 
  "          \"N\" symbols.                                                  \n"
  "                                                                          \n"
  "      [gto_fastq_extract_quality_scores]                                  \n"
  "          It extracts all the quality-scores from FASTQ reads.            \n"
  "                                                                          \n"
  "      [gto_fastq_info]                                                    \n" 
  "          It analyses the basic information of FASTQ file format.         \n"
  "                                                                          \n"
  "      [gto_fastq_maximum_read_size]                                       \n"
  "          It filters the FASTQ reads with the length higher than          \n"
  "          the value defined.                                              \n" 
  "                                                                          \n"
  "      [gto_fastq_minimum_quality_score]                                   \n"
  "          It discards reads with average quality-score below of           \n"
  "          the defined.                                                    \n"
  "                                                                          \n"
  "      [gto_fastq_minimum_read_size]                                       \n"
  "          It filters the FASTQ reads with the length smaller than         \n"
  "          the value defined.                                              \n"
  "                                                                          \n"
  "      [gto_fastqrand__extra_chars]                                        \n"
  "          It substitues in the FASTQ files, the DNA sequence the          \n"
  "          outside ACGT chars by random ACGT symbols.                      \n"
  "                                                                          \n"
  "      [gto_fastq_from_seq]                                                \n"
  "          It converts a genomic sequence to pseudo FASTQ file             \n"
  "          format.                                                         \n"
  "                                                                          \n"
  "      [gto_fastq_mutate]                                                  \n" 
  "          It creates a synthetic mutation of a FASTQ file given           \n"
  "          specific rates of mutations, deletions and additions.           \n"
  "                                                                          \n"
  "      [gto_fastq_split]                                                   \n"
  "          It splits Paired End files according to the direction           \n"
  "          of the strand ('/1' or '/2').                                   \n"
  "                                                                          \n"
  "      [gto_fastq_pack]                                                    \n"
  "          It packages each FASTQ read in a single line.                   \n"
  "                                                                          \n"
  "      [gto_fastq_unpack]                                                  \n"
  "          It unpacks the FASTQ reads packaged using the                   \n"
  "          gto_fastq_pack tool.                                            \n"
  "                                                                          \n"
  "      [gto_fastq_quality_score_info]                                      \n"
  "          Iit analyses the quality-scores of a FASTQ file.                \n"
  "                                                                          \n"
  "      [gto_fastq_quality_score_min]                                       \n"
  "          It analyses the minimal quality-scores of a FASTQ file.         \n"
  "                                                                          \n"
  "      [gto_fastq_quality_score_max]                                       \n"
  "          It analyses the maximal quality-scores of a FASTQ file.         \n"
  "                                                                          \n"
  "      [gto_fastq_cut]                                                     \n"
  "          It cuts read sequences in a FASTQ file.                         \n"
  "                                                                          \n"
  "      [gto_fastq_minimum_local_quality_score_forward]                     \n"
  "          It ilters the reads considering the quality score               \n"
  "          average of a defined window size of bases.                      \n"
  "                                                                          \n"
  "      [gto_fastq_minimum_local_quality_score_reverse]                     \n"
  "          It filters the reverse reads, considering the average           \n"
  "          window size score defined by the bases.                         \n"
  "                                                                          \n"
  //FASTA_Tools
  "      [gto_fasta_to_seq]                                                  \n"
  "          It converts a FASTA or Multi-FASTA file format to a seq.        \n"
  "                                                                          \n"
  "      [gto_fasta_from_seq]                                                \n"
  "          It converts a genomic sequence to pseudo FASTA file             \n" 
  "          format.                                                         \n"
  "                                                                          \n"
  "      [gto_fasta_extract]                                                 \n"
  "          It extracts sequences from a FASTA file, which the              \n"
  "          range is defined by the user in the parameters.                 \n"
  "                                                                          \n"
  "      [gto_fasta_extract_by_read]                                         \n"
  "          It extracts sequences from each read in a Multi-FASTA           \n"
  "          file (splited by \\n), which the range is defined by the        \n"
  "          user in the parameters.                                         \n"
  "                                                                          \n"
  "      [gto_fasta_info]                                                    \n"
  "          It shows the readed information of a FASTA or Multi-FASTA       \n"
  "          file format.                                                    \n"
  "                                                                          \n"
  "      [gto_fasta_mutate]                                                  \n"
  "          It reates a synthetic mutation of a fasta file given            \n"
  "          specific rates of editions, deletions and additions.            \n"
  "                                                                          \n"
  "      [gto_fasta_rand_extra_chars]                                        \n"
  "          It substitues in the DNA sequence the outside ACGT chars        \n" 
  "          by random ACGT symbols.                                         \n"
  "                                                                          \n"
  "      [gto_fasta_extract_read_by_pattern]                                 \n"
  "          It extracts reads from a Multi-FASTA file format given a        \n" 
  "          pattern in the header.                                          \n"
  "                                                                          \n"
  "      [gto_fasta_find_n_pos]                                              \n"
  "          It reports the \"N\" regions in a sequence or FASTA (seq)       \n" 
  "          file.                                                           \n"
  "                                                                          \n"
  "      [gto_fasta_split_reads]                                             \n"
  "          It splits a Multi-FASTA file to multiple FASTA files.           \n"
  "                                                                          \n"
  "      [gto_fasta_rename_human_headers]                                    \n"
  "          It changes the headers of FASTA or Multi-FASTA file to          \n" 
  "          simple chrX by order, where X is the number.                    \n"
  "                                                                          \n"
  //Genomic_Sequence_Tools
  "      [gto_genomic_gen_random_dna]                                        \n"
  "          It generates a synthetic DNA.                                   \n"
  "                                                                          \n"
  "      [gto_genomic_rand_seq_extra_chars]                                  \n"
  "          It substitues in the DNA sequence the outside ACGT              \n" 
  "          chars by random ACGT symbols.                                   \n"
  "                                                                          \n"
  "      [gto_genomic_dna_mutate]                                            \n" 
  "          It creates a synthetic mutation of a sequence file              \n"
  "          given specific rates of mutations, deletions and                \n" 
  "          additions.                                                      \n"
  "                                                                          \n"
  "      [gto_genomic_extract]                                               \n"
  "          It extracts sequences from a sequence file, which the           \n"
  "          range is defined by the user in the parameters.                 \n"
  "                                                                          \n"
  //General_Purpose_Tools
  "      [gto_char_to_line]                                                  \n"
  "          It splits a sequence into lines, creating an output             \n"
  "          sequence which has a char for each line.                        \n"
  "                                                                          \n"
  "      [gto_reverse]                                                       \n"
  "          It reverses the order of a sequence.                            \n"
  "                                                                          \n"
  "      [gto_new_line_on_new_x]                                             \n"
  "          It splits different rows with a new empty row.                  \n"
  "                                                                          \n"
  "      [gto_upper_bound]                                                   \n"
  "          It sets an upper bound in a file with a value per               \n"
  "          line.                                                           \n"
  "                                                                          \n"
  "      [gto_lower_bound]                                                   \n"
  "          It sets an lower bound in a file with a value per               \n"
  "          line.                                                           \n"
  "                                                                          \n"
  "      [gto_brute_force_string]                                            \n"
  "          It generates all combinations, line by line, for an             \n"
  "          inputted alphabet and specific size.                            \n"
  "                                                                          \n"
  "      [gto_real_to_binary_with_threshold]                                 \n"
  "          It converts a sequence of real numbers into a binary            \n"
  "          sequence, given a threshold.                                    \n"
  "                                                                          \n"
  "      [gto_sum]                                                           \n"
  "          It adds decimal values in file, line by line, splitted          \n"
  "          by spaces or tabs.                                              \n"
  "                                                                          \n"
  "      [gto_filter]                                                        \n"
  "          It filters numerical sequences.                                 \n"
  "                                                                          \n"
  "      [gto_word_search]                                                   \n"
  "          It search for a word in a file.                                 \n"
  "                                                                          \n"
  "      [gto_permute_by_blocks]                                             \n"
  "          It permutates by block sequence, FASTA and Multi-FASTA          \n"
  "          files.                                                          \n"
  "                                                                          \n"
  "                                                                          \n"
  "COPYRIGHT                                                                 \n"
  "      Copyright (C) 2014-2019, IEETA, University of Aveiro.               \n"
  "      This is a Free software, under MIT. You may redistribute            \n"
  "      copies of it under the terms of the MIT license. See more           \n"
  "      at <https://opensource.org/licenses/MIT>. There is NOT              \n"
  "      ANY WARRANTY, to the extent permitted by law.                       \n"
  "                                                                          \n",
  VERSION, RELEASE);
  return EXIT_SUCCESS;
}