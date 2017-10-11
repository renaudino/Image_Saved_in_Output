/*
 * _coder_Breakthrough_info.c
 *
 * Code generation for function '_coder_Breakthrough_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Breakthrough.h"
#include "_coder_Breakthrough_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString("Breakthrough"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("9.2.0.556344 (R2017a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[21] = {
    "789ced5dcb6f234919ef999d1d7640a006896597c7e2e1801023a59dc499388360e367e2247eb693d81e8d9276bb6d97dd0fbbbbedd839f90242e2c60a2124a4"
    "851bc7bd20711c692ffc010b07c4618f485c90f6bc12dd6e5792ae71c59eb8dd9eb6aba4a85cf3b5ebf7f99bafbe5f3dbba87b89e43d8aa2be61fc9979fdafd4",
    "307dddca287a94dfa7ec0995df1be51f206598dea61ed8be07e57f1ce5bc22eb424fb70a22908554472a0baa51903949b8aaa6a24840e6643ddf6f09942a688a"
    "d8152a43491588421e48c29172a3b00f8c8214bf21ba2a9822f373a42ef04db623516a5dbb5657bc59a06ed8e713ccef7f30a57d8e30f6a111f9f3d88bd23326",
    "c9e92257f6b182da1554262d822e307295ebfb7495e3815c63121257137c2c6798c107645fbaa3b73a3a135605aea9d755a553abaf4937f5ef61f47b38a5fe6f"
    "61f47f34cadfb3fdebeeee301b8c722ab43b498f69edf84d8c1e34221724f14cd28dff6fedac2e88ada1479909ea717e473dd084d3032688f7b73be2c1fad909",
    "7850fe3c715488bd883c6332aa525339c967fabac62443f9a35098c96df8d7b739465714b1acf418c3488c08ca8c347437466969cc2b76b3dc68a2dda6f52334"
    "87e911f50efcf8e7cffff58f908b78c3b42a78b3b6bf7731783422af94fa5ca0cc738568800b5d2ab1bcd428b6e2d77a6426e04cd283c294ddaaffef98ef4f6b",
    "470e533f8dc8e7d09e1ff38a2429f2196f3220a43bf8bb5a18bda7f5c7fb481926c813b6f8386077ad0ff92b7e1860ea9fd6ae3fc4e0d3889c572a862d80d1f9"
    "50654e5c035ab803443d211bdd0f4105fccc3c01f11f22e56b7d2c4945e99445c1399e2860f1ecf2d7f62bf3efc9d06acc1368360635db9ae45e5c1b7c4c78c2",
    "fb3c91eeb623a1ea7e3798cf06fa7c4c9237e225717f797882f4fbc6e730d9fc6f70e8d838e13b183c1a91233ca0f19cc8a9b1dac2e2fface3cc0c52a690e7a0"
    "dc99f80fcde56adcffe5afff4de2bed7e3be3f75b12de581543a04b94aec30cab3d56a3fbc3c719fb4e3f1fadbe37d7277d2b8635a7ba1f38b14f21c94034db6",
    "baaaba399338fb7cd0a2e27c1a8b6797dfa95f50053da1d2520cf7606cf632fa042efac7efc2ef9338eff538bfb7d9ecb3ed1a1023f94833d70ed7f2cde35894"
    "c4f9558df338bc69edf50e52a6ae9eb32440ab02635853f76a5c3fc0e2d9e5b3c775cb4ea3611e89eb4b82376b5cff36068f46e4ddb6106b75796da770b1a928",
    "198d5ddf2c96a8e589ebde9a87bd8eeb8fab40d5f42a70d5ff5e9e3b367f8fdb4740237273becaf8f96755451515a575a67405b52a2a17d6aac6e2d6795fde11"
    "0fd67f8e94513c289f65be6fe446b7d8cfd5f99c9f7cf6f63f091fcc09cfad7ebe7618ebc5a297979983de4620b9e18f6443ebfed8f2f0c17f30df9fd68ebfc2",
    "d44f23f279b7ebc7b73f70b559c65d7fdd736c7cf000295357cf5912b3df6be60b5e67007245e82564fd4a8fbfcca8477c821e50eec4b8c11c33b8e81f7f22eb"
    "bcdee707b6df02d2563b77ba0eca9540a294cd24d7bb4b340f44daaf3dd9fdcdbf34f3fc93f885af73c3ada6649e7f7c0e13990f72078fccf33b533fe9ffdbf5",
    "75d65f138ef5ff27cdd71b3f5de27adee583b9ae0f403f128d0f8c65a905ac0ffc9ef081f7f940ec3d2d09fe46da7f0cc2fefcc5e53a1710334bb4af93f0815d"
    "5f67d78bdde50320133e988e0f804cf860b9f0dce283ad44b2d96aa6849ebe9f646b99bdc3cc9e5f5ca2fd9e64bd787c0e93cdff3e3f772cbebfee7cffac78af",
    "bb1f88cc0bda1399d777078fcceb3b533f39bf353e87c9ee7fd7fb3c0798fae67c8eb72c72da5a4713ce54a16a7ef6ec3ea0e2043c2877a63ff0c4b41573c36e"
    "b09befa6ff7cf0c5e033c20773c2738b0fd45032c086aa91341fd3b4067792a8ef44a508e18395e48341ca313e781f834723f2717cd0ab287a67245fd438e08d",
    "f59b5bf8606837f7fde6abc1ff927181d77960a35ed8511ad1cb4cbe580cc4b7ca917aac44786025dbb3917eee180f7c17834723f2713c0064f30583967c51e3"
    "8259fd263f010fca9df41bcb6ef6f7099e63f424e3016fe0b9c503e13217d2c2a940a62b06b3b2ae074f9bedf61ee181d5e4815dc7deeff31e52a690e7a01c37",
    "1ef0ea382087c5b3cb9df69705acfb9271c01cf1dc8aff8d78e3e06991dbecf1b9ccc605f06f940ba72289ffabd89e8df433320ea0c838e0a6de641cb0583c32"
    "0e70a67ec203e3739870e38001a63eb24e7c3b1eac9fac13cf1d6f9856058fac133b53ffacf7039431f5d388dc793e785c16ccedff7a5d15b4ba2256ecbfeb1c",
    "a3b7b3fe98718c1f7e80c1a311f9387eb86982459d0f98b55f718ac5b3cb9df4a32bbbb97b8e38e2ff94cc17799d179295939d742ad8d98b1f54526d259d398e"
    "5e6e2ed17b84c838617c0e937dff50c8311ef81e068f46e4080fc06eae6982a1dcabeb06c7583cbbdc21bf19d9edda755cf49bdf92f362dee78148fba07bd16c",
    "e484765c3a8aee15001b4da796e8fe30d29ec7e730d9fd6fcd311ef83e068f46e4b7f0c0b00978753c7082c5b3cbe7e0373d77cf970dbe3668121e78537960da"
    "f74c37424db92366fc7db698da92a493a014c94528c203abd79ecdb4e5d8fe21723f188a67977bf7be09723fd83cf1c8fd60ced44fe2fef81c26bbff7db8e873",
    "64c3f7352781dc41ef4b3e9f519fe5de3f7a6db605cc1ffee24b8dac137b9d071ad2563816ee674b82d415f580908a6fee74080f101ec0d4e7060fe4cd63d523"
    "f982c723afdc23e0417e189a93f0c372e1b9c50f52913fda7c9a61f78e5a07db9568b2dd554eeb649d60e5f96141e7cb86012d2376b465e385ec043da0dc415e",
    "30cdb888fda58417e688e7162fecb3fb8502bb993ed5f7b874b391384cd6b62ec8798315e505e7ce1b90fb296fc78372723fe55df1acb42a78e47e4a67eaff04"
    "f3fd69ed7884a99f46e4cf632f4acf98e4b0a1fa5841359a259316411718b9caf57dbacaf140ae310989ab093e96eb0a151f907de98edeeae84c5815b8a65e57",
    "954eadeefa3952235def27c5e14d6baf49f7d04b6ac5304a45f0ea3ab11bf70a98ef2984765a6b59f5b9e80ff7b67d4b1dd7ffb0c87db06eed0fea154ba5582d"
    "04d476a02bc5b6f2c550b6c15124aeaf503b36d2ff3e742ace7e0583478f24a39fe9d9fd3f092c9e5d3eab3f4077707ffe66f0d1c32cd9ffe3f5b81ebcc8568f",
    "0b81a7dbfb5d31b7130d068f94639e2271fd4d69c72d8c7ed3fadd7d8cfe8f90e7adf4a35d2bfff1a2df1b01b47007887a424e59b7e57a761f90bbf70da16673"
    "75fee66372cfcc9bcb07d3cedfa4bbed48a8badf0de6b3813e1f93e48d78495ca2fb24bdce07e718fd9cf5bb9f3a16ff7d183c1a918fd9ff2ff45a11456a713a",
    "3022f2a2e2ffcb19f1dc7d6fd02b665b84ff7c44ce057b9f07cabd622a57e59a27d9e461ea2027e8ac9f4d131e58311e78e6d83e9f6f61f068448ef080f1ebad"
    "7ff7ea3cd02116cf2e7726fe1be672fd7de383df907920efc7fbe4b1ee2f264e43b27c9c03192d9baa69f9f612acdbfe1f3151e879",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 46464U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_Breakthrough_info.c) */
