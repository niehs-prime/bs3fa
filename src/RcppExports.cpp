// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// rnormArma
double rnormArma(double mu, double sig_sq);
RcppExport SEXP _bs3fa_rnormArma(SEXP muSEXP, SEXP sig_sqSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sig_sq(sig_sqSEXP);
    rcpp_result_gen = Rcpp::wrap(rnormArma(mu, sig_sq));
    return rcpp_result_gen;
END_RCPP
}
// sample_sigsq_p
double sample_sigsq_p(double a_sig, double b_sig, int N, double RSS);
RcppExport SEXP _bs3fa_sample_sigsq_p(SEXP a_sigSEXP, SEXP b_sigSEXP, SEXP NSEXP, SEXP RSSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a_sig(a_sigSEXP);
    Rcpp::traits::input_parameter< double >::type b_sig(b_sigSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type RSS(RSSSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_sigsq_p(a_sig, b_sig, N, RSS));
    return rcpp_result_gen;
END_RCPP
}
// sample_sigsq_x
arma::vec sample_sigsq_x(double a_sig, double b_sig, arma::mat D_min_mu, std::vector< std::string > type);
RcppExport SEXP _bs3fa_sample_sigsq_x(SEXP a_sigSEXP, SEXP b_sigSEXP, SEXP D_min_muSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a_sig(a_sigSEXP);
    Rcpp::traits::input_parameter< double >::type b_sig(b_sigSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D_min_mu(D_min_muSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_sigsq_x(a_sig, b_sig, D_min_mu, type));
    return rcpp_result_gen;
END_RCPP
}
// sample_sigsq_y
arma::vec sample_sigsq_y(double a_sig, double b_sig, arma::mat D_min_mu, arma::mat obs_Y, bool homo_var);
RcppExport SEXP _bs3fa_sample_sigsq_y(SEXP a_sigSEXP, SEXP b_sigSEXP, SEXP D_min_muSEXP, SEXP obs_YSEXP, SEXP homo_varSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a_sig(a_sigSEXP);
    Rcpp::traits::input_parameter< double >::type b_sig(b_sigSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D_min_mu(D_min_muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type obs_Y(obs_YSEXP);
    Rcpp::traits::input_parameter< bool >::type homo_var(homo_varSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_sigsq_y(a_sig, b_sig, D_min_mu, obs_Y, homo_var));
    return rcpp_result_gen;
END_RCPP
}
// get_X_min_mu
arma::mat get_X_min_mu(arma::mat X, arma::mat Theta, arma::mat eta, arma::mat xi, arma::mat nu);
RcppExport SEXP _bs3fa_get_X_min_mu(SEXP XSEXP, SEXP ThetaSEXP, SEXP etaSEXP, SEXP xiSEXP, SEXP nuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nu(nuSEXP);
    rcpp_result_gen = Rcpp::wrap(get_X_min_mu(X, Theta, eta, xi, nu));
    return rcpp_result_gen;
END_RCPP
}
// get_Y_min_mu
arma::mat get_Y_min_mu(arma::mat Y, arma::mat Lambda, arma::mat eta);
RcppExport SEXP _bs3fa_get_Y_min_mu(SEXP YSEXP, SEXP LambdaSEXP, SEXP etaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type eta(etaSEXP);
    rcpp_result_gen = Rcpp::wrap(get_Y_min_mu(Y, Lambda, eta));
    return rcpp_result_gen;
END_RCPP
}
// get_tau
arma::vec get_tau(arma::vec delta);
RcppExport SEXP _bs3fa_get_tau(SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(get_tau(delta));
    return rcpp_result_gen;
END_RCPP
}
// sample_eta_all
arma::mat sample_eta_all(arma::mat Y, arma::mat X, arma::mat xi, arma::mat nu, arma::mat Lambda, arma::mat Theta, arma::vec sigsq_y, arma::vec sigsq_x, arma::mat obs_Y);
RcppExport SEXP _bs3fa_sample_eta_all(SEXP YSEXP, SEXP XSEXP, SEXP xiSEXP, SEXP nuSEXP, SEXP LambdaSEXP, SEXP ThetaSEXP, SEXP sigsq_ySEXP, SEXP sigsq_xSEXP, SEXP obs_YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigsq_y(sigsq_ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigsq_x(sigsq_xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type obs_Y(obs_YSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_eta_all(Y, X, xi, nu, Lambda, Theta, sigsq_y, sigsq_x, obs_Y));
    return rcpp_result_gen;
END_RCPP
}
// sample_nu_all
arma::mat sample_nu_all(arma::mat X, arma::mat xi, arma::mat eta, arma::mat Theta, arma::vec sigsq_x);
RcppExport SEXP _bs3fa_sample_nu_all(SEXP XSEXP, SEXP xiSEXP, SEXP etaSEXP, SEXP ThetaSEXP, SEXP sigsq_xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigsq_x(sigsq_xSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_nu_all(X, xi, eta, Theta, sigsq_x));
    return rcpp_result_gen;
END_RCPP
}
// sample_xi
arma::mat sample_xi(arma::mat X, arma::mat nu, arma::mat eta, arma::mat Theta, arma::vec sigsq_x, arma::mat phi_xi, arma::vec tau_xi);
RcppExport SEXP _bs3fa_sample_xi(SEXP XSEXP, SEXP nuSEXP, SEXP etaSEXP, SEXP ThetaSEXP, SEXP sigsq_xSEXP, SEXP phi_xiSEXP, SEXP tau_xiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigsq_x(sigsq_xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type phi_xi(phi_xiSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau_xi(tau_xiSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_xi(X, nu, eta, Theta, sigsq_x, phi_xi, tau_xi));
    return rcpp_result_gen;
END_RCPP
}
// sample_phi_xi
arma::mat sample_phi_xi(double gamma_xi, arma::vec tau_xi, arma::mat xi);
RcppExport SEXP _bs3fa_sample_phi_xi(SEXP gamma_xiSEXP, SEXP tau_xiSEXP, SEXP xiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type gamma_xi(gamma_xiSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau_xi(tau_xiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi(xiSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_phi_xi(gamma_xi, tau_xi, xi));
    return rcpp_result_gen;
END_RCPP
}
// sample_delta_xi
arma::vec sample_delta_xi(double a1, double a2, arma::mat xi, arma::mat phi_xi, arma::vec delta_xi);
RcppExport SEXP _bs3fa_sample_delta_xi(SEXP a1SEXP, SEXP a2SEXP, SEXP xiSEXP, SEXP phi_xiSEXP, SEXP delta_xiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< double >::type a2(a2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type phi_xi(phi_xiSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type delta_xi(delta_xiSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_delta_xi(a1, a2, xi, phi_xi, delta_xi));
    return rcpp_result_gen;
END_RCPP
}
// sample_Theta
arma::mat sample_Theta(arma::mat X, arma::mat nu, arma::mat eta, arma::mat xi, arma::vec sigsq_x, double betasq_th, arma::mat gammasq_th, arma::vec tau_th);
RcppExport SEXP _bs3fa_sample_Theta(SEXP XSEXP, SEXP nuSEXP, SEXP etaSEXP, SEXP xiSEXP, SEXP sigsq_xSEXP, SEXP betasq_thSEXP, SEXP gammasq_thSEXP, SEXP tau_thSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigsq_x(sigsq_xSEXP);
    Rcpp::traits::input_parameter< double >::type betasq_th(betasq_thSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type gammasq_th(gammasq_thSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau_th(tau_thSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_Theta(X, nu, eta, xi, sigsq_x, betasq_th, gammasq_th, tau_th));
    return rcpp_result_gen;
END_RCPP
}
// sample_betasq_th
double sample_betasq_th(double t, arma::mat Theta, arma::mat gammasq_th, arma::vec tau_th);
RcppExport SEXP _bs3fa_sample_betasq_th(SEXP tSEXP, SEXP ThetaSEXP, SEXP gammasq_thSEXP, SEXP tau_thSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type gammasq_th(gammasq_thSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau_th(tau_thSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_betasq_th(t, Theta, gammasq_th, tau_th));
    return rcpp_result_gen;
END_RCPP
}
// sample_gammasq_th
arma::mat sample_gammasq_th(arma::mat s_mat, arma::mat Theta, double betasq_th, arma::vec tau_th);
RcppExport SEXP _bs3fa_sample_gammasq_th(SEXP s_matSEXP, SEXP ThetaSEXP, SEXP betasq_thSEXP, SEXP tau_thSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type s_mat(s_matSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< double >::type betasq_th(betasq_thSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau_th(tau_thSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_gammasq_th(s_mat, Theta, betasq_th, tau_th));
    return rcpp_result_gen;
END_RCPP
}
// sample_s_mat
arma::mat sample_s_mat(arma::mat gammasq_th);
RcppExport SEXP _bs3fa_sample_s_mat(SEXP gammasq_thSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type gammasq_th(gammasq_thSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_s_mat(gammasq_th));
    return rcpp_result_gen;
END_RCPP
}
// sample_t
double sample_t(double betasq_th);
RcppExport SEXP _bs3fa_sample_t(SEXP betasq_thSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type betasq_th(betasq_thSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_t(betasq_th));
    return rcpp_result_gen;
END_RCPP
}
// get_covDD
arma::mat get_covDD(arma::vec d_vec, double l);
RcppExport SEXP _bs3fa_get_covDD(SEXP d_vecSEXP, SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type d_vec(d_vecSEXP);
    Rcpp::traits::input_parameter< double >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(get_covDD(d_vec, l));
    return rcpp_result_gen;
END_RCPP
}
// sample_Lambda
arma::mat sample_Lambda(arma::mat Y, arma::mat Lambda, arma::mat eta, arma::vec alpha_lam, arma::vec sigsq_y, arma::mat covDD, arma::mat obs_Y);
RcppExport SEXP _bs3fa_sample_Lambda(SEXP YSEXP, SEXP LambdaSEXP, SEXP etaSEXP, SEXP alpha_lamSEXP, SEXP sigsq_ySEXP, SEXP covDDSEXP, SEXP obs_YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_lam(alpha_lamSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigsq_y(sigsq_ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type covDD(covDDSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type obs_Y(obs_YSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_Lambda(Y, Lambda, eta, alpha_lam, sigsq_y, covDD, obs_Y));
    return rcpp_result_gen;
END_RCPP
}
// sample_Lambda_err
Rcpp::List sample_Lambda_err(arma::mat Y, arma::mat Lambda, arma::mat eta, arma::vec alpha_lam, arma::vec sigsq_y, arma::mat covDD, arma::mat obs_Y);
RcppExport SEXP _bs3fa_sample_Lambda_err(SEXP YSEXP, SEXP LambdaSEXP, SEXP etaSEXP, SEXP alpha_lamSEXP, SEXP sigsq_ySEXP, SEXP covDDSEXP, SEXP obs_YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_lam(alpha_lamSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigsq_y(sigsq_ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type covDD(covDDSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type obs_Y(obs_YSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_Lambda_err(Y, Lambda, eta, alpha_lam, sigsq_y, covDD, obs_Y));
    return rcpp_result_gen;
END_RCPP
}
// sample_psi_lam
double sample_psi_lam(double g, arma::mat Lambda, arma::vec delta_lam, arma::mat covDD, double nugget);
RcppExport SEXP _bs3fa_sample_psi_lam(SEXP gSEXP, SEXP LambdaSEXP, SEXP delta_lamSEXP, SEXP covDDSEXP, SEXP nuggetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type g(gSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type delta_lam(delta_lamSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type covDD(covDDSEXP);
    Rcpp::traits::input_parameter< double >::type nugget(nuggetSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_psi_lam(g, Lambda, delta_lam, covDD, nugget));
    return rcpp_result_gen;
END_RCPP
}
// sample_delta_ome
arma::vec sample_delta_ome(double a1, double a2, arma::vec delta_ome, double psi_lam, arma::mat Lambda, arma::mat covDD, double nugget, arma::mat Theta, double betasq_th, arma::mat gammasq_th);
RcppExport SEXP _bs3fa_sample_delta_ome(SEXP a1SEXP, SEXP a2SEXP, SEXP delta_omeSEXP, SEXP psi_lamSEXP, SEXP LambdaSEXP, SEXP covDDSEXP, SEXP nuggetSEXP, SEXP ThetaSEXP, SEXP betasq_thSEXP, SEXP gammasq_thSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< double >::type a2(a2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type delta_ome(delta_omeSEXP);
    Rcpp::traits::input_parameter< double >::type psi_lam(psi_lamSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type covDD(covDDSEXP);
    Rcpp::traits::input_parameter< double >::type nugget(nuggetSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< double >::type betasq_th(betasq_thSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type gammasq_th(gammasq_thSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_delta_ome(a1, a2, delta_ome, psi_lam, Lambda, covDD, nugget, Theta, betasq_th, gammasq_th));
    return rcpp_result_gen;
END_RCPP
}
// sample_Y_miss
arma::mat sample_Y_miss(arma::mat Lambda, arma::mat eta, arma::vec sigsq_y, arma::mat Y, arma::mat obs_Y);
RcppExport SEXP _bs3fa_sample_Y_miss(SEXP LambdaSEXP, SEXP etaSEXP, SEXP sigsq_ySEXP, SEXP YSEXP, SEXP obs_YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigsq_y(sigsq_ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type obs_Y(obs_YSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_Y_miss(Lambda, eta, sigsq_y, Y, obs_Y));
    return rcpp_result_gen;
END_RCPP
}
// sample_X
Rcpp::List sample_X(std::vector< std::string > type, arma::mat X_original, arma::vec sigsq_x, arma::mat Theta, arma::mat eta, arma::mat xi, arma::mat nu);
RcppExport SEXP _bs3fa_sample_X(SEXP typeSEXP, SEXP X_originalSEXP, SEXP sigsq_xSEXP, SEXP ThetaSEXP, SEXP etaSEXP, SEXP xiSEXP, SEXP nuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type type(typeSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_original(X_originalSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigsq_x(sigsq_xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type nu(nuSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_X(type, X_original, sigsq_x, Theta, eta, xi, nu));
    return rcpp_result_gen;
END_RCPP
}
// sample_X_init
arma::mat sample_X_init(std::vector< std::string > type, arma::mat X_original, arma::vec sigsq_x);
RcppExport SEXP _bs3fa_sample_X_init(SEXP typeSEXP, SEXP X_originalSEXP, SEXP sigsq_xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type type(typeSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_original(X_originalSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigsq_x(sigsq_xSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_X_init(type, X_original, sigsq_x));
    return rcpp_result_gen;
END_RCPP
}
// get_sqexp_kernel
arma::mat get_sqexp_kernel(arma::vec d_vec, double l, double sig, double nugget);
RcppExport SEXP _bs3fa_get_sqexp_kernel(SEXP d_vecSEXP, SEXP lSEXP, SEXP sigSEXP, SEXP nuggetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type d_vec(d_vecSEXP);
    Rcpp::traits::input_parameter< double >::type l(lSEXP);
    Rcpp::traits::input_parameter< double >::type sig(sigSEXP);
    Rcpp::traits::input_parameter< double >::type nugget(nuggetSEXP);
    rcpp_result_gen = Rcpp::wrap(get_sqexp_kernel(d_vec, l, sig, nugget));
    return rcpp_result_gen;
END_RCPP
}
// sample_eta_fpca
arma::mat sample_eta_fpca(arma::mat Y, arma::mat Lambda, arma::vec sigsq_y, arma::mat obs_Y);
RcppExport SEXP _bs3fa_sample_eta_fpca(SEXP YSEXP, SEXP LambdaSEXP, SEXP sigsq_ySEXP, SEXP obs_YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigsq_y(sigsq_ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type obs_Y(obs_YSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_eta_fpca(Y, Lambda, sigsq_y, obs_Y));
    return rcpp_result_gen;
END_RCPP
}
// sample_delta_lam
arma::vec sample_delta_lam(double a1, double a2, arma::vec delta_ome, double psi_lam, arma::mat Lambda, arma::mat covDD, double nugget);
RcppExport SEXP _bs3fa_sample_delta_lam(SEXP a1SEXP, SEXP a2SEXP, SEXP delta_omeSEXP, SEXP psi_lamSEXP, SEXP LambdaSEXP, SEXP covDDSEXP, SEXP nuggetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< double >::type a2(a2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type delta_ome(delta_omeSEXP);
    Rcpp::traits::input_parameter< double >::type psi_lam(psi_lamSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type covDD(covDDSEXP);
    Rcpp::traits::input_parameter< double >::type nugget(nuggetSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_delta_lam(a1, a2, delta_ome, psi_lam, Lambda, covDD, nugget));
    return rcpp_result_gen;
END_RCPP
}
// msf
Rcpp::NumericMatrix msf(arma::mat lambda, arma::mat pivot);
RcppExport SEXP _bs3fa_msf(SEXP lambdaSEXP, SEXP pivotSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type pivot(pivotSEXP);
    rcpp_result_gen = Rcpp::wrap(msf(lambda, pivot));
    return rcpp_result_gen;
END_RCPP
}
// msfOUT
Rcpp::NumericVector msfOUT(arma::mat lambda, arma::mat pivot);
RcppExport SEXP _bs3fa_msfOUT(SEXP lambdaSEXP, SEXP pivotSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type pivot(pivotSEXP);
    rcpp_result_gen = Rcpp::wrap(msfOUT(lambda, pivot));
    return rcpp_result_gen;
END_RCPP
}
// aplr
Rcpp::NumericMatrix aplr(arma::mat matr, arma::vec perm);
RcppExport SEXP _bs3fa_aplr(SEXP matrSEXP, SEXP permSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type matr(matrSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type perm(permSEXP);
    rcpp_result_gen = Rcpp::wrap(aplr(matr, perm));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bs3fa_rnormArma", (DL_FUNC) &_bs3fa_rnormArma, 2},
    {"_bs3fa_sample_sigsq_p", (DL_FUNC) &_bs3fa_sample_sigsq_p, 4},
    {"_bs3fa_sample_sigsq_x", (DL_FUNC) &_bs3fa_sample_sigsq_x, 4},
    {"_bs3fa_sample_sigsq_y", (DL_FUNC) &_bs3fa_sample_sigsq_y, 5},
    {"_bs3fa_get_X_min_mu", (DL_FUNC) &_bs3fa_get_X_min_mu, 5},
    {"_bs3fa_get_Y_min_mu", (DL_FUNC) &_bs3fa_get_Y_min_mu, 3},
    {"_bs3fa_get_tau", (DL_FUNC) &_bs3fa_get_tau, 1},
    {"_bs3fa_sample_eta_all", (DL_FUNC) &_bs3fa_sample_eta_all, 9},
    {"_bs3fa_sample_nu_all", (DL_FUNC) &_bs3fa_sample_nu_all, 5},
    {"_bs3fa_sample_xi", (DL_FUNC) &_bs3fa_sample_xi, 7},
    {"_bs3fa_sample_phi_xi", (DL_FUNC) &_bs3fa_sample_phi_xi, 3},
    {"_bs3fa_sample_delta_xi", (DL_FUNC) &_bs3fa_sample_delta_xi, 5},
    {"_bs3fa_sample_Theta", (DL_FUNC) &_bs3fa_sample_Theta, 8},
    {"_bs3fa_sample_betasq_th", (DL_FUNC) &_bs3fa_sample_betasq_th, 4},
    {"_bs3fa_sample_gammasq_th", (DL_FUNC) &_bs3fa_sample_gammasq_th, 4},
    {"_bs3fa_sample_s_mat", (DL_FUNC) &_bs3fa_sample_s_mat, 1},
    {"_bs3fa_sample_t", (DL_FUNC) &_bs3fa_sample_t, 1},
    {"_bs3fa_get_covDD", (DL_FUNC) &_bs3fa_get_covDD, 2},
    {"_bs3fa_sample_Lambda", (DL_FUNC) &_bs3fa_sample_Lambda, 7},
    {"_bs3fa_sample_Lambda_err", (DL_FUNC) &_bs3fa_sample_Lambda_err, 7},
    {"_bs3fa_sample_psi_lam", (DL_FUNC) &_bs3fa_sample_psi_lam, 5},
    {"_bs3fa_sample_delta_ome", (DL_FUNC) &_bs3fa_sample_delta_ome, 10},
    {"_bs3fa_sample_Y_miss", (DL_FUNC) &_bs3fa_sample_Y_miss, 5},
    {"_bs3fa_sample_X", (DL_FUNC) &_bs3fa_sample_X, 7},
    {"_bs3fa_sample_X_init", (DL_FUNC) &_bs3fa_sample_X_init, 3},
    {"_bs3fa_get_sqexp_kernel", (DL_FUNC) &_bs3fa_get_sqexp_kernel, 4},
    {"_bs3fa_sample_eta_fpca", (DL_FUNC) &_bs3fa_sample_eta_fpca, 4},
    {"_bs3fa_sample_delta_lam", (DL_FUNC) &_bs3fa_sample_delta_lam, 7},
    {"_bs3fa_msf", (DL_FUNC) &_bs3fa_msf, 2},
    {"_bs3fa_msfOUT", (DL_FUNC) &_bs3fa_msfOUT, 2},
    {"_bs3fa_aplr", (DL_FUNC) &_bs3fa_aplr, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_bs3fa(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
